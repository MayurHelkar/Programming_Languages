CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): basicCalculator_functionPointerArray.o
	$(CC) $(CFLAGS) -o $(TARGET) basicCalculator_functionPointerArray.o

basicCalculator_functionPointerArray.o: basicCalculator_functionPointerArray.cpp
	$(CC) $(CFLAGS) -c basicCalculator_functionPointerArray.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app