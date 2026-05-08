CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): FILE_MacroMethod.o
	$(CC) $(CFLAGS) -o $(TARGET) FILE_MacroMethod.o

FILE_MacroMethod.o: FILE_MacroMethod.c
	$(CC) $(CFLAGS) -c FILE_MacroMethod.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app