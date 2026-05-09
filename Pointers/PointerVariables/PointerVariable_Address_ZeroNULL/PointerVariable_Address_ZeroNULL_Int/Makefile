CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_int.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_int.o

pointerVariable_address_zeroNULL_int.o: pointerVariable_address_zeroNULL_int.c
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_int.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app