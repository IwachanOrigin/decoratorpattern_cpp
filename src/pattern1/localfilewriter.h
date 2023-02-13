
#ifndef LOCAL_FILE_WRITER_H_
#define LOCAL_FILE_WRITER_H_

#include "writer.h"

namespace design_pattern
{

class LocalFileWriter : public Writer
{
public:
  explicit LocalFileWriter(const std::string& filename);
  virtual ~LocalFileWriter() = default;

  void writeData(const std::string& data) override;

private:
  std::string m_filename;
};

}

#endif // LOCAL_FILE_WRITER_H_
