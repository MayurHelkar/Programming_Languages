CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): programFile_display.o
	$(CC) $(CFLAGS) -o $(TARGET) programFile_display.o

programFile_display.o: programFile_display.cpp
	$(CC) $(CFLAGS) -c programFile_display.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app