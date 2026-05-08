CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): fileName_print_macroFILE.o
	$(CC) $(CFLAGS) -o $(TARGET) fileName_print_macroFILE.o

fileName_print_macroFILE.o: fileName_print_macroFILE.c
	$(CC) $(CFLAGS) -c fileName_print_macroFILE.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app