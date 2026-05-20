CC = gcc
TARGET = app
SOURCE = fileCreate_writePlus.c

$(TARGET): $(SOURCE)
	$(CC) -save-temps -o $(TARGET) $(SOURCE)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.i *.s *.o *.txt

.PHONY: run clean