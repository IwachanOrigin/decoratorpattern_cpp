
project(pattern1 CXX)

set(MAIN_SRC
  main.cpp
  brlocalfilewriter.cpp
  brlocalfilewriter.h
  consolewriter.cpp
  consolewriter.h
  debugbrlocalfilewriter.cpp
  debugbrlocalfilewriter.h
  debuglocalfilewriter.cpp
  debuglocalfilewriter.h
  localfilewriter.cpp
  localfilewriter.h
  write.h
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

