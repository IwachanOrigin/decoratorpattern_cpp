
project(pattern2 CXX)

set(MAIN_SRC
  main.cpp
  brwriter.h
  brwriter.cpp
  consolewriter.cpp
  consolewriter.h
  debugbrlocalfilewriter.cpp
  debugbrlocalfilewriter.h
  debuglocalfilewriter.cpp
  debuglocalfilewriter.h
  localfilewriter.cpp
  localfilewriter.h
  writer.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

