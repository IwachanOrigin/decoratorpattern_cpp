
#include "brwriter.h"

using namespace design_pattern;

BrWriter::BrWriter(Writer* pOut)
  : AbstractDecoratorWriter(pOut)
{
}

BrWriter::~BrWriter()
{
}

void BrWriter::writeData(std::string str)
{
  std::string before = "\n";
  std::string after = "<br>";
  std::string::size_type pos = 0, size = 0;

  while((pos = str.find(before, size)) != std::string::npos)
  {
    // Replace
    str.replace(pos, before.size(), after);
    size = pos + after.size();
  }
}
