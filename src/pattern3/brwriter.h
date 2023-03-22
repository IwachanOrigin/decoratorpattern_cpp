
#ifndef BR_WRITER_H_
#define BR_WRITER_H_

#include "abstractdecoratorwriter.h"
#include <string>

namespace design_pattern
{

class BrWriter : public AbstractDecoratorWriter
{
public:
  explicit BrWriter(Writer* pOut);
  virtual ~BrWriter();

  void writeData(std::string str) override;
};

} // design_pattern

#endif // BR_WRITER_H_
