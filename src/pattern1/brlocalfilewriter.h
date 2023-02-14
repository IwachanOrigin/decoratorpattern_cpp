
#ifndef BR_LOCAL_FILE_WRITER_H_
#define BR_LOCAL_FILE_WRITER_H_

#include "localfilewriter.h"

namespace design_pattern
{

class BRLocalFileWriter : public LocalFileWriter
{
public:
  explicit BRLocalFileWriter(const std::string fileName);
  virtual ~BRLocalFileWriter() = default;

  virtual void writeData(std::string& data);
};

} // design_pattern


#endif // BR_LOCAL_FILE_WRITER_H_

