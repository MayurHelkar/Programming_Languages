CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_char.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_char.o

pointerVariable_address_zeroNULL_char.o: pointerVariable_address_zeroNULL_char.c
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_char.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app