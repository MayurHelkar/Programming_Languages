CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): function_functionPointer_size.o
	$(CC) $(CFLAGS) -o $(TARGET) function_functionPointer_size.o

function_functionPointer_size.o: function_functionPointer_size.cpp
	$(CC) $(CFLAGS) -c function_functionPointer_size.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app