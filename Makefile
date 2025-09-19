CC = gcc
CFLAGS = -Wall

all: brazil usa pride

brazil: brazil.c
    $(CC) $(CFLAGS) brazil.c -o brazil -lm

usa: usa.c
    $(CC) $(CFLAGS) usa.c -o usa

pride: pride.c
    $(CC) $(CFLAGS) pride.c -o pride

clean:
    rm -f brazil usa pride