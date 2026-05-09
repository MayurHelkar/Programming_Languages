CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_float.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_float.o

pointerVariable_address_zeroNULL_float.o: pointerVariable_address_zeroNULL_float.cpp
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_float.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app