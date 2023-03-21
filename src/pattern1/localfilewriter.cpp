
#include "localfilewriter.h"
#include <fstream>
#include <iostream>

using namespace design_pattern;

LocalFileWriter::LocalFileWriter(const std::string& filename)
  : m_filename(filename)
{
}

void LocalFileWriter::writeData(std::string data)
{
  std::ofstream ofs;
  ofs.open(m_filename);
  if(ofs.is_open())
  {
    ofs << data.c_str() << std::endl;
    ofs.close();
  }
}
