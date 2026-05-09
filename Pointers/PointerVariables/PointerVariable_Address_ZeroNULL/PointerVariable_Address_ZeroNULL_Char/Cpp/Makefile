CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_char.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_char.o

pointerVariable_address_zeroNULL_char.o: pointerVariable_address_zeroNULL_char.cpp
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_char.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app