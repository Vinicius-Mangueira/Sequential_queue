CC=gcc
CFLAGS=-Wall
TARGET=queue_test

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)