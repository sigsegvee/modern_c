# compiler and flags
CC:=clang
CFLAGS:=-Wall
SRC:=$(wildcard src/*.c)
BINS:=$(patsubst %.c,%,$(SRC))

all: $(BINS)

%: %.c
	$(CC) $(CFLAGS) -o $(notdir $@) $<

clean:
	rm $(notdir $(BINS))