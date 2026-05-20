CC = gcc
TARGET = app
SOURCE = fileCreate_readBinary.c

$(TARGET): $(SOURCE)
	$(CC) -save-temps -o $(TARGET) $(SOURCE)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.i *.s *.o *.txt *.exe
.PHONY: run clean