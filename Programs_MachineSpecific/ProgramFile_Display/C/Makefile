CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): programFile_display.o
	$(CC) $(CFLAGS) -o $(TARGET) programFile_display.o

programFile_display.o: programFile_display.c
	$(CC) $(CFLAGS) -c programFile_display.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app