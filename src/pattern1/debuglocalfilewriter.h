
#ifndef DEBUG_LOCAL_FILE_WRITER_H_
#define DEBUG_LOCAL_FILE_WRITER_H_

#include "localfilewriter.h"

namespace design_pattern
{

class DebugLocalFileWriter : public LocalFileWriter
{
public:
  explicit DebugLocalFileWriter(const std::string fileName);
  virtual ~DebugLocalFileWriter() = default;

  void writeData(std::string data);

private:
  void debugPrint(const std::string& data);
};

} // design_pattern


#endif // DEBUG_LOCAL_FILE_WRITER_H_

