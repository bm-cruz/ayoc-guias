CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET).o: $(TARGET).c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean

# en este caso es indistinto usar $< o usar $^?