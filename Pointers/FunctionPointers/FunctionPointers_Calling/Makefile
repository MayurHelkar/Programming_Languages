CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): function_functionPointer_calling.o
	$(CC) $(CFLAGS) -o $(TARGET) function_functionPointer_calling.o

function_functionPointer_calling.o: function_functionPointer_calling.c
	$(CC) $(CFLAGS) -c function_functionPointer_calling.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app