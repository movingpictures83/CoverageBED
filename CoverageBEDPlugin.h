#ifndef COVERAGEBEDPLUGIN_H
#define COVERAGEBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class CoverageBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "CoverageBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
