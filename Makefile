CC = gcc
CFLAGS = -Wall

all: brazil usa pride

brazil: brazil.c
	$(CC) $(CFLAGS) -o brazil brazil.c -lm

usa: usa.c
	$(CC) $(CFLAGS) -o usa usa.c

pride: pride.c
	$(CC) $(CFLAGS) -o pride pride.c

clean:
	rm -f brazil usa pride