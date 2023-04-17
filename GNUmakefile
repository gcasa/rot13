# Makefile to build the project
# license : MIT

# Project name
PROJECT = rot13

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -Wpedantic

# Source files
SRC = rot13_main.c

# Object files
OBJ = $(SRC:.c=.o)

# Header files
HDR = 

# Libraries
LIBS =

# Executable
EXE = $(PROJECT)

# Build target
all: $(EXE)

# Link object files into executable
$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(EXE)

# Compile source files into object files
%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJ) $(EXE)

# Install
install: $(EXE)
	cp $(EXE) /opt/local/bin

# Uninstall
uninstall:
	rm -f /opt/local/bin/$(EXE)

# EOF