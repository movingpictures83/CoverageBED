#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "CoverageBEDPlugin.h"

void CoverageBEDPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void CoverageBEDPlugin::run() {}

void CoverageBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "coverageBed -a";
myCommand += " ";
addRequiredParameterNoFlag("A");
addRequiredParameter("-b", "B");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<CoverageBEDPlugin> CoverageBEDPluginProxy = PluginProxy<CoverageBEDPlugin>("CoverageBED", PluginManager::getInstance());
