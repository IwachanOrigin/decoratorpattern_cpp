
#ifndef WRITER_H_
#define WRITER_H_

#include "writerimpl.h"
#include <string>

namespace design_pattern
{

class Writer
{
public:
  explicit Writer();
  virtual ~Writer();

  virtual void openFile() = 0;
  virtual void writeData(const std::string& stringDat) = 0;
  virtual void closeFile() = 0;

  WriterImpl* getImpl() { return m_writerImpl; }
  void setImpl(WriterImpl* writerImpl) { m_writerImpl = writerImpl; }

private:
  WriterImpl* m_writerImpl;
};

}

#endif // WRITER_H_
