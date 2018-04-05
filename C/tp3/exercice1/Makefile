CC = gcc
EXEC = ex1
CLFAGS = -Wall
LDFLAGS = 
OBJECTS = main.o fonction.o

all: $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $(EXEC)

%.o: %.c
	$(CC) -c $< -o $@
