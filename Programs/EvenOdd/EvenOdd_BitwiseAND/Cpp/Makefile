CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): evenOdd_bitwiseAND.o
	$(CC) $(CFLAGS) -o $(TARGET) evenOdd_bitwiseAND.o

evenOdd_bitwiseAND.o: evenOdd_bitwiseAND.cpp
	$(CC) $(CFLAGS) -c evenOdd_bitwiseAND.cpp

clean:
	del /Q *.o *.exe