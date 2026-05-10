CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): main.o basicCalculator_arithmeticOperations.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o basicCalculator_arithmeticOperations.o

main.o: main.c basicCalculator_arithmeticOperations.h
	$(CC) $(CFLAGS) -c main.c

basicCalculator_arithmeticOperations.o: basicCalculator_arithmeticOperations.c basicCalculator_arithmeticOperations.h
	$(CC) $(CFLAGS) -c basicCalculator_arithmeticOperations.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app