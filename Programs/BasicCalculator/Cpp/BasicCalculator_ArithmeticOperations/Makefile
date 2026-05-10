CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): basicCalculator.o basicCalculator_arithmeticOperations.o
	$(CC) $(CFLAGS) -o $(TARGET) basicCalculator.o basicCalculator_arithmeticOperations.o

main.o: main.c basicCalculator_arithmeticOperations.hpp
	$(CC) $(CFLAGS) -c basicCalculator.cpp

basicCalculator_arithmeticOperations.o: basicCalculator_arithmeticOperations.cpp basicCalculator_arithmeticOperations.hpp
	$(CC) $(CFLAGS) -c basicCalculator_arithmeticOperations.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app