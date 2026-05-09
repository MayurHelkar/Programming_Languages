CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_float.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_float.o

pointerVariable_address_zeroNULL_float.o: pointerVariable_address_zeroNULL_float.c
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_float.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app