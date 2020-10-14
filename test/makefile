GOOGLE_TEST_LIB = gtest
GOOGLE_TEST_INCLUDE = /Users/lauenburg/Privat/CodeProjects/opencv_cpp/test/lib/googletest

G++ = g++
G++_FLAGS = -std=c++11 -c -Wall -I $(GOOGLE_TEST_INCLUDE)
LD_FLAGS = -l $(GOOGLE_TEST_LIB)

VPATH = src/
BUILDDIR = ../build/test/
BINDIR = ../bin/

OBJECTS_FN = main.o string-compare.o
OBJECTS = $(foreach FILE_NAME, $(OBJECTS_FN) , $(BUILDDIR)$(FILE_NAME))
#$(info VAR="$(OBJECTS)")

TARGET_FN = string-compare
TARGET = $(foreach FILE_NAME, $(TARGET_FN) , $(BINDIR)$(FILE_NAME))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(G++) -o $(TARGET) $(OBJECTS) $(LD_FLAGS)

$(BUILDDIR)%.o : %.cpp
	$(G++) $(G++_FLAGS) $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: all clean
