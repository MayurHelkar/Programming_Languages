CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): evenOdd_bitwiseAND.o
	$(CC) $(CFLAGS) -o $(TARGET) evenOdd_bitwiseAND.o

evenOdd_bitwiseAND.o: evenOdd_bitwiseAND.c
	$(CC) $(CFLAGS) -c evenOdd_bitwiseAND.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app