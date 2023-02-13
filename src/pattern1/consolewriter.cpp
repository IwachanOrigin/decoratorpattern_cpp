
#include "consolewriter.h"
#include <iostream>

using namespace design_pattern;

void ConsoleWriter::writeData(const std::string& data)
{
  std::cout << data << std::endl;
}

