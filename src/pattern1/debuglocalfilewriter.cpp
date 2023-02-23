
#include "debuglocalfilewriter.h"
#include <iostream>

using namespace design_pattern;

DebugLocalFileWriter::DebugLocalFileWriter(const std::string fileName)
  : LocalFileWriter(fileName)
{
  this->debugPrint("Constructor");
}

void DebugLocalFileWriter::writeData(std::string& data)
{
  this->debugPrint("writeData");
  LocalFileWriter::writeData(data);
}

void DebugLocalFileWriter::debugPrint(const std::string& data)
{
  std::cout << data << std::endl;
}
