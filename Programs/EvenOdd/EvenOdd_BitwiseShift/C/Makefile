CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): evenOdd_bitwiseShift.o
	$(CC) $(CFLAGS) -o $(TARGET) evenOdd_bitwiseShift.o

evenOdd_bitwiseShift.o: evenOdd_bitwiseShift.c
	$(CC) $(CFLAGS) -c evenOdd_bitwiseShift.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app