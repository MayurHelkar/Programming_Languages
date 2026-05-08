CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): main.o arithmeticOperations.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o arithmeticOperations.o

main.o: main.c arithmeticOperations.h
	$(CC) $(CFLAGS) -c main.c

arithmeticOperations.o: arithmeticOperations.c arithmeticOperations.h
	$(CC) $(CFLAGS) -c arithmeticOperations.c

clean:
	del /Q *.o *.exe