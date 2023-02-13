
#ifndef WRITER_IMPL_H_
#define WRITER_IMPL_H_

#include <string>

namespace design_pattern
{

class WriterImpl
{
public:
  explicit WriterImpl() = default;
  virtual ~WriterImpl() = default;

  virtual void openFile() = 0;
  virtual void writeData(const std::string& stringDat) = 0;
  virtual void closeFile() = 0;
};

}

#endif // WRITER_IMPL_H_
