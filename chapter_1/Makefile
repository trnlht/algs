all: main

main: $(patsubst %.cpp,%.o,$(wildcard *cpp))
	g++ $^ -o $@

%.o: %.cpp
	g++ -c -MD $<

include $(wildcard *.d)

clean:
	rm -f *.o *.d


