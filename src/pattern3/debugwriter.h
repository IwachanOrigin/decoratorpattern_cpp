
#ifndef DEBUG_WRITER_H_
#define DEBUG_WRITER_H_

#include "abstractdecoratorwriter.h"

namespace design_pattern
{

class DebugWriter : public AbstractDecoratorWriter
{
public:
  explicit DebugWriter(Writer* pOut);
  virtual ~DebugWriter();

  void writeData(std::string data) override;

private:
  void debugPrint(const std::string& data);
};

} // design_pattern


#endif // DEBUG_WRITER_H_

