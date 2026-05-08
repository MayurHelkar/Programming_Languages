CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): evenOdd_bitwiseShift.o
	$(CC) $(CFLAGS) -o $(TARGET) evenOdd_bitwiseShift.o

evenOdd_bitwiseShift.o: evenOdd_bitwiseShift.cpp
	$(CC) $(CFLAGS) -c evenOdd_bitwiseShift.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app