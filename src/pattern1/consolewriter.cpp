
#include "consolewriter.h"
#include <iostream>

using namespace design_pattern;

void ConsoleWriter::writeData(const std::string& stringData)
{
  std::cout << stringData << std::endl;
}


