
project(pattern2 CXX)

set(MAIN_SRC
  main.cpp
  brwriter.h
  brwriter.cpp
  consolewriter.cpp
  consolewriter.h
  debugwriter.h
  debugwriter.cpp
  localfilewriter.cpp
  localfilewriter.h
  writer.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

