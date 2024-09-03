CC = gcc
CFLAGS = -Wall -g

SRC = $(wildcard *.c SEC_1/*.c)
OBJ = $(SRC:.c=.o)

TARGET = p.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del $(TARGET)
	del *.o
	del SEC_1\*.o

