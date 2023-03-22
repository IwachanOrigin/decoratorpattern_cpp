
#include "abstractdecoratorwriter.h"

using namespace design_pattern;

AbstractDecoratorWriter::AbstractDecoratorWriter(Writer* pOut)
  : Writer()
  , m_pOut(pOut)
{
}

AbstractDecoratorWriter::~AbstractDecoratorWriter()
{

}

void AbstractDecoratorWriter::writeData(std::string str)
{
  m_pOut->writeData(str);
}
