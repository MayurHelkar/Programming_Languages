CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): evenOdd_modulus.o
	$(CC) $(CFLAGS) -o $(TARGET) evenOdd_modulus.o

evenOdd_modulus.o: evenOdd_modulus.c
	$(CC) $(CFLAGS) -c evenOdd_modulus.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app