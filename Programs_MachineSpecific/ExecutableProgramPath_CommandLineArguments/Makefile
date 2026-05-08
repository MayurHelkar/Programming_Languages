CC = gcc
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): executableProgramPath_commandLineArguments.o
	$(CC) $(CFLAGS) -o $(TARGET) executableProgramPath_commandLineArguments.o

executableProgramPath_commandLineArguments.o: executableProgramPath_commandLineArguments.c
	$(CC) $(CFLAGS) -c executableProgramPath_commandLineArguments.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app