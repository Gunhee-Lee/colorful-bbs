mkfile_path := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

CC=g++
CFLAGS=-lncurses -Wall -g -I$(mkfile_path)/include/ -L$(mkfile_path)/lib/ -std=c++11
ccsrc=$(wildcard ./src/*.cc) \
      $(wildcard ./src/controller/*.cc) \
      $(wildcard ./src/model/*.cc) \
      $(wildcard ./src/view/*.cc)
obj=$(ccsrc:.cc=.o)

cbbs: $(obj)
	$(CC) -o bin/$@ $^ $(CFLAGS)

%.o: %.cc
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	rm $(obj) bin/cbbs
