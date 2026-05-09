CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): pointerVariable_address_zeroNULL_double.o
	$(CC) $(CFLAGS) -o $(TARGET) pointerVariable_address_zeroNULL_double.o

pointerVariable_address_zeroNULL_double.o: pointerVariable_address_zeroNULL_double.cpp
	$(CC) $(CFLAGS) -c pointerVariable_address_zeroNULL_double.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app