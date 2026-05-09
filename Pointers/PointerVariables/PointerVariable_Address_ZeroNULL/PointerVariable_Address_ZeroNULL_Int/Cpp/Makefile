CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_int.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_int.o

pointerVariable_address_zeroNULL_int.o: pointerVariable_address_zeroNULL_int.cpp
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_int.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app