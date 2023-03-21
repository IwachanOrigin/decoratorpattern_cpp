
#include "brlocalfilewriter.h"

using namespace design_pattern;

BRLocalFileWriter::BRLocalFileWriter(const std::string fileName)
  : LocalFileWriter(fileName)
{
}

void BRLocalFileWriter::writeData(std::string data)
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
  LocalFileWriter::writeData(data);
}
