
#ifndef ABSTRACT_DECORATOR_WRITER_H_
#define ABSTRACT_DECORATOR_WRITER_H_

#include "writer.h"
#include <string>

namespace design_pattern
{

class AbstractDecoratorWriter : public Writer
{
public:
  explicit AbstractDecoratorWriter(Writer* pOut);
  virtual ~AbstractDecoratorWriter();

  virtual void writeData(std::string str) override;

private:
  Writer* m_pOut;
};

} // design_pattern

#endif // ABSTRACT_DECORATOR_WRITER_H_
