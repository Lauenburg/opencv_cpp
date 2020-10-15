G++ = g++
G++_FLAGS = -std=c++11 -c -Wall

VPATH = src/travis/
BUILDDIR = build/travis/
BINDIR = bin/

OBJECT_FN = helloTravis.o
TARGET_FN = helloTravis

OBJECT = $(foreach FILE_NAME, $(OBJECT_FN) , $(BUILDDIR)$(FILE_NAME))
TARGET = $(foreach FILE_NAME, $(TARGET_FN) , $(BINDIR)$(FILE_NAME))

all: $(TARGET)

$(TARGET):$(OBJECT)
	$(G++) -o $(TARGET) $(OBJECT)

$(BUILDDIR)%.o:%.cpp
	$(G++) $(G++_FLAGS) $< -o $@

clean:
	rm -f $(TARGET) $(OBJECT)

.PHONY: all clean
