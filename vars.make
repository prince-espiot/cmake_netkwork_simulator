MAIN_FILES = src/main.cpp src/main.o
SOURCES=src/main.cpp src/simulator.cpp src/node.cpp src/endhost.cpp
HEADERS=src/simulator.hpp src/node.hpp src/endhost.hpp
OBJECTS=$(SOURCES:cpp=o)
TSOURCES=tests/simulator_test.cpp tests/demo_test.cpp
TOBJECTS=$(TSOURCES:cpp=o)
EXECNAME=main
TEXECNAME=tests/test