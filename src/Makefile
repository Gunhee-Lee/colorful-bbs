CC=g++
CFLAGS=-lncurses -Wall -g
ccsrc=$(wildcard *.cc) \
      $(wildcard controller/*.cc) \
      $(wildcard model/*.cc) \
      $(wildcard view/*.cc)
obj=$(ccsrc:.cc=.o)

cbbs: $(obj)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm $(obj) cbbs
