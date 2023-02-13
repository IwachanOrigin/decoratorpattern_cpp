
#ifndef WRITER_H_
#define WRITER_H_

#include <string>

namespace design_pattern
{

class Writer
{
public:
  explicit Writer() = default;
  virtual ~Writer() = default;

  virtual void writeData(const std::string& data) = 0;
};

}

#endif // WRITER_H_
