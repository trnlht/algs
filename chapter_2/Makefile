CC=g++
CFLAGS=-c -MD

all: main

main: $(patsubst %.cpp,%.o,$(wildcard *cpp))
	$(CC) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) $<

include $(wildcard *.d)

clean:
	rm -f *.o *.d


