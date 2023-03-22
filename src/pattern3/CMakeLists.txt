
project(pattern3 CXX)

set(MAIN_SRC
  abstractdecoratorwriter.cpp
  abstractdecoratorwriter.h
  brwriter.cpp
  brwriter.h
  consolewriter.cpp
  consolewriter.h
  debugwriter.cpp
  debugwriter.h
  localfilewriter.cpp
  localfilewriter.h
  main.cpp
  writer.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

