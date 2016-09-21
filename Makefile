# compiler and flags
CC:=clang
CFLAGS:=-Wall
LDFLAGS:=-lm
SRC:=$(wildcard src/*.c)
BINS:=$(patsubst src/%.c,%,$(SRC))

all: $(BINS)

.DELETE_ON_ERROR:

$(BINS): %: src/%.c
	$(CC) $(CFLAGS) -o $(notdir $@) $< $(LDFLAGS)

clean:
	rm $(notdir $(BINS))