
#include "debugbrlocalfilewriter.h"
#include <iostream>

using namespace design_pattern;

DebugBRLocalFileWriter::DebugBRLocalFileWriter(const std::string fileName)
  : LocalFileWriter(fileName)
{
  this->debugPrint("Constructor");
}

void DebugBRLocalFileWriter::writeData(std::string data)
{
  std::string before = "\n";
  std::string after = "<br>";
  std::string::size_type pos = 0, size = 0;

  while((pos = data.find(before, size)) != std::string::npos)
  {
    // replace
    data.replace(pos, before.size(), after);
    size = pos + after.size();
  }
  this->debugPrint("writeData");
  LocalFileWriter::writeData(data);
}

void DebugBRLocalFileWriter::debugPrint(const std::string& data)
{
  std::cout << data << std::endl;
}
