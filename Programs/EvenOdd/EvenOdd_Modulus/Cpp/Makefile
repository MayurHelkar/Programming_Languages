CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): evenOdd_modulus.o
	$(CC) $(CFLAGS) -o $(TARGET) evenOdd_modulus.o

evenOdd_modulus.o: evenOdd_modulus.cpp
	$(CC) $(CFLAGS) -c evenOdd_modulus.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app