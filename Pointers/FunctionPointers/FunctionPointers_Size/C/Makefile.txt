CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): function_functionPointer_size.o
	$(CC) $(CFLAGS) -o $(TARGET) function_functionPointer_size.o

function_functionPointer_size.o: function_functionPointer_size.c
	$(CC) $(CFLAGS) -c function_functionPointer_size.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app