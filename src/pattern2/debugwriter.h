
#ifndef DEBUG_WRITER_H_
#define DEBUG_WRITER_H_

#include "writer.h"

namespace design_pattern
{

class DebugWriter : public Writer
{
public:
  explicit DebugWriter(Writer* pOut);
  virtual ~DebugWriter();

  void writeData(std::string data);

private:
  void debugPrint(const std::string& data);

  Writer* m_pOut;
};

} // design_pattern


#endif // DEBUG_WRITER_H_

