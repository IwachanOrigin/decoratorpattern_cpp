
#include "localfilewriter.h"
#include <iostream>

using namespace design_pattern;

LocalFileWriter::LocalFileWriter(const std::string& filename)
  : m_filename(filename)
{
}

void LocalFileWriter::openFile()
{
  m_ofs.open(m_filename.c_str(), std::ios::trunc);
}

void LocalFileWriter::closeFile()
{
  m_ofs.close();
}

void LocalFileWriter::writeData(const std::string& stringDat)
{
  m_ofs << stringDat.c_str() << std::endl;
}
