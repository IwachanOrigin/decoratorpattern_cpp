
#include "writer.h"

using namespace design_pattern;

Writer::Writer()
  : m_writerImpl(nullptr)
{
}

Writer::~Writer()
{
  if (m_writerImpl)
  {
    delete m_writerImpl;
    m_writerImpl = nullptr;
  }
}
