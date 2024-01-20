
# The compiler for C is gcc for C++ is defined as g++

CC = gcc

# Compiles flags
# -g add debbugin information to the executable file
# -Wall turns on most, but not all, compiler warnings

CFLAGS = -g -Wall

# The Build target executable

TARGET = main

# Source code for linking files

SRC = main.c Other.c

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o ./Build/$(TARGET) $(SRC) && ./Build/$(TARGET)

clean: 
	rm -rf ./Build/$(TARGET)
