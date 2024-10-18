C_COMPILE = gcc
CLAGS = -Wall -g
TARGET = main

all: $(TARGET)

$(TARGET): main.o shape.o
	$(C_COMPILE) $(CLAGS) main.o shape.o -o main

main.o: main.c
	$(C_COMPILE) $(CLAGS) -c main.c -o main.o

shape.o: shape.c
	$(C_COMPILE) $(CLAGS) -c shape.c -o shape.o

clean:
	rm -f main.o shape.o main