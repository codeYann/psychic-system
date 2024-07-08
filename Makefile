# Define variables
CC = gcc
LIB_DIR = lib
CFLAGS = -Wall -g -I.
SRC = src
BUILD_DIR = build
OBJ_DIR = $(BUILD_DIR)/objects
TARGET = $(BUILD_DIR)/bin/bin


gates.o: lib/gate/gate.c
	echo 'Compiling the gate.c'
	gcc -c lib/gate/gate.c -o objects/gate.o

main.o: main.c
	gcc -c main.c -o objects/main.o

final: objects/main.o objects/gate.o
	gcc objects/main.o objects/gate.o -o bin/exe

all: final
