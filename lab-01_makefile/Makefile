CFLAGS = -Wno-implicit-function-declaration -I include
CC = gcc
CFLAGS = -Wall
TARGET = lab-01_makefile
OBJ = obj
SRC = src
INCLUDE = include

all: $(TARGET)

$(TARGET): $(OBJ)/main.o $(OBJ)/util.o $(OBJ)/io.o $(OBJ)/algorithm.o
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ)/io.o: $(SRC)/io.c $(INCLUDE)/io.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ)/util.o: $(SRC)/util.c $(INCLUDE)/util.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ)/algorithm.o: $(SRC)/algorithm.c $(INCLUDE)/algorithm.h
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ)/main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ):
	mkdir -p $(OBJ)

$(TARGET):
	mkdir -p $(TARGET)

clean:
	rm -f $(OBJFILES) $(TARGET) *~