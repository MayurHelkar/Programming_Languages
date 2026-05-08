CC = g++
CFLAGS = -Wall -Wextra

TARGET = app

all: $(TARGET)

$(TARGET): executableProgramPath_commandLineArguments.o
	$(CC) $(CFLAGS) -o $(TARGET) executableProgramPath_commandLineArguments.o

executableProgramPath_commandLineArguments.o: executableProgramPath_commandLineArguments.cpp
	$(CC) $(CFLAGS) -c executableProgramPath_commandLineArguments.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o *.exe app