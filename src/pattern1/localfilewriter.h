
#ifndef LOCAL_FILE_WRITER_H_
#define LOCAL_FILE_WRITER_H_

#include "writerimpl.h"
#include <fstream>

namespace design_pattern
{

class LocalFileWriter : public WriterImpl
{
public:
  explicit LocalFileWriter(const std::string& filename);
  virtual ~LocalFileWriter() = default;

  void openFile() override;
  void closeFile() override;
  void writeData(const std::string& stringDat) override;

protected:
  std::ofstream m_ofs;

private:
  std::string m_filename;
};

}

#endif // LOCAL_FILE_WRITER_H_
