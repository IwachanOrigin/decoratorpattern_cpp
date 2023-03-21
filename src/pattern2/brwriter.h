
#ifndef BR_WRITER_H_
#define BR_WRITER_H_

#include "writer.h"
#include <string>

namespace design_pattern
{

class BrWriter : public Writer
{
public:
  explicit BrWriter(Writer* pOut);
  virtual ~BrWriter();

  void writeData(std::string str) override;

private:
  Writer* m_pOut;
};

} // design_pattern

#endif // BR_WRITER_H_
