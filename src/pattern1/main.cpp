
#include "writer.h"
#include "consolewriter.h"
#include "localfilewriter.h"
#include "brlocalfilewriter.h"
#include "debugbrlocalfilewriter.h"

using namespace design_pattern;

int main(int argc, char* argv[])
{
  // local file writer
  LocalFileWriter lfw("localfile.txt");
  lfw.writeData("local file writer.");

  // br local file writer
  BRLocalFileWriter blfw("brlocalfile.txt");
  blfw.writeData("br local file writer.");

  // debug local file writer
  DebugBRLocalFileWriter dblfw("debugbrlocalfile.txt");
  dblfw.writeData("debug br local file writer.");

  // console writer
  ConsoleWriter cw;
  cw.writeData("Console writer.");
  return 0;
}

