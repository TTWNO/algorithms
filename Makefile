CC=clang
OPTS=-Os
default: all

all:
	make ack

ack:
	cd ackerman && $(CC) ack.c $(OPTS) -o ack
