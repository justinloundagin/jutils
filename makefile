CXX=g++
CFLAGS=-g -fPIC -Wall
INCPATH=
SRC=$(wildcard src/*.cpp)
LIBPATH=
TARGETS=lib/libcppjutils.so c++test.o

all: $(TARGETS)

$(LIBPATH)libcppjutils.so: $(SRC)
	echo $(SRC)
	$(CXX) $(CFLAGS) $? -shared -o $@ -I$(INCPATH)

c++test.o: main.cpp
	$(CXX) $? -o $@ -I./inc -L./lib -lcppjutils

clean:
	rm -f $(TARGETS) 
