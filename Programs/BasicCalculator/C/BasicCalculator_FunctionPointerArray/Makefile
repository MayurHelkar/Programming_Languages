CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): basicCalculator_functionPointerArray.o
	$(CC) $(CFLAGS) -o $(TARGET) basicCalculator_functionPointerArray.o

basicCalculator_functionPointerArray.o: basicCalculator_functionPointerArray.c
	$(CC) $(CFLAGS) -c basicCalculator_functionPointerArray.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app