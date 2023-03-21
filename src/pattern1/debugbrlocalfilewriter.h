
#ifndef DEBUG_BR_LOCAL_FILE_WRITER_H_
#define DEBUG_BR_LOCAL_FILE_WRITER_H_

#include "localfilewriter.h"

namespace design_pattern
{

class DebugBRLocalFileWriter : public LocalFileWriter
{
public:
  explicit DebugBRLocalFileWriter(const std::string fileName);
  virtual ~DebugBRLocalFileWriter() = default;

  void writeData(std::string data);

private:
  void debugPrint(const std::string& data);
};

} // design_pattern


#endif // DEBUG_BR_LOCAL_FILE_WRITER_H_

