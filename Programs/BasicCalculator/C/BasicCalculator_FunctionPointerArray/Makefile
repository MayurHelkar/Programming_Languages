CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): basicCalculator_functionPointer_functionArray.o
	$(CC) $(CFLAGS) -o $(TARGET) basicCalculator_functionPointer_functionArray.o

basicCalculator_functionPointer_functionArray.o: basicCalculator_functionPointer_functionArray.c
	$(CC) $(CFLAGS) -c basicCalculator_functionPointer_functionArray.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app