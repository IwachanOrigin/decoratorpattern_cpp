
#ifndef CONSOLE_WRITER_H_
#define CONSOLE_WRITER_H_

#include "writerimpl.h"
#include <fstream>

namespace design_pattern
{

class ConsoleWriter : public WriterImpl
{
public:
  explicit ConsoleWriter() = default;
  virtual ~ConsoleWriter() = default;

  void openFile() override {}
  void closeFile() override {}
  void writeData(const std::string& stringData) override;

protected:
  std::ofstream m_ofs;
};

}

#endif // CONSOLE_WRITER_H_
