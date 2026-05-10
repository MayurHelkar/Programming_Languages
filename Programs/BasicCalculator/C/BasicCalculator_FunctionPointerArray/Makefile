CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): functionPointer_functionArray.o
	$(CC) $(CFLAGS) -o $(TARGET) functionPointer_functionArray.o

functionPointer_functionArray.o: functionPointer_functionArray.c
	$(CC) $(CFLAGS) -c functionPointer_functionArray.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app