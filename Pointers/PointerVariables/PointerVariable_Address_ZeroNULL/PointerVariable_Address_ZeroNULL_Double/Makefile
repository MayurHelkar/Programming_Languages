CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_double.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_double.o

pointerVariable_address_zeroNULL_double.o: pointerVariable_address_zeroNULL_double.c
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_double.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app