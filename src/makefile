OPEN_CV_INCLUDE = /usr/local/Cellar/opencv/4.4.0_2/include/opencv4/
TOOL_BOX_INCLUDE = toolbox/

G++ = g++
G++_FLAGS = -std=c++11 -c -Wall -I $(OPEN_CV_INCLUDE) -I $(TOOL_BOX_INCLUDE)

VPATH = toolbox/
BUILDDIR = ../build/src///////
BINDIR = ../bin/

OBJECTS_FN = main.o basic_image_handling.o
OBJECTS = $(foreach FILE_NAME, $(OBJECTS_FN) , $(BUILDDIR)$(FILE_NAME))
#$(info VAR="$(OBJECTS)")

TARGET_FN = basic_image_handling
TARGET = $(foreach FILE_NAME, $(TARGET_FN) , $(BINDIR)$(FILE_NAME))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(G++) $(shell pkg-config --cflags --libs opencv4) -o $(TARGET) $(OBJECTS)

$(BUILDDIR)%.o : %.cpp
	$(G++) $(G++_FLAGS) $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: all clean
