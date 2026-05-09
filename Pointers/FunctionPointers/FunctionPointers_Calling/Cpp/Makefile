CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): function_functionPointer_calling.o
	$(CC) $(CFLAGS) -o $(TARGET) function_functionPointer_calling.o

function_functionPointer_calling.o: function_functionPointer_calling.cpp
	$(CC) $(CFLAGS) -c function_functionPointer_calling.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app