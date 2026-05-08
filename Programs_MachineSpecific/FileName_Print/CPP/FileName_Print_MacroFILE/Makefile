CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): fileName_print_macroFILE.o
	$(CC) $(CFLAGS) -o $(TARGET) fileName_print_macroFILE.o

fileName_print_macroFILE.o: fileName_print_macroFILE.cpp
	$(CC) $(CFLAGS) -c fileName_print_macroFILE.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app