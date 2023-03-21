
#include "writer.h"
#include "consolewriter.h"
#include "localfilewriter.h"
#include "brwriter.h"
#include "debugwriter.h"

using namespace design_pattern;

int main(int argc, char* argv[])
{
  // local file writer
  LocalFileWriter lfw("localfile.txt");
  lfw.writeData("local file writer.");

  // br writer
  BrWriter bw(&lfw);
  bw.writeData("br local file writer.");

  // debug writer
  DebugWriter dw(&bw);
  dw.writeData("debug local file writer.");

  // console writer
  ConsoleWriter cw;
  cw.writeData("Console writer.");
  return 0;
}

