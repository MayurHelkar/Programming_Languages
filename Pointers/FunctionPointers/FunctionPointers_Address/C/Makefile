CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): function_functionPointer_address.o
	$(CC) $(CFLAGS) -o $(TARGET) function_functionPointer_address.o

function_functionPointer_address.o: function_functionPointer_address.c
	$(CC) $(CFLAGS) -c function_functionPointer_address.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app