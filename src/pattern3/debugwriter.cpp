
#include <iostream>
#include "debugwriter.h"

using namespace design_pattern;

DebugWriter::DebugWriter(Writer* pOut)
  : AbstractDecoratorWriter(pOut)
{
  this->debugPrint("Constructor");
}

DebugWriter::~DebugWriter()
{
}

void DebugWriter::writeData(std::string data)
{
  this->debugPrint(data);
}

void DebugWriter::debugPrint(const std::string& data)
{
  std::cout << data << std::endl;
}
