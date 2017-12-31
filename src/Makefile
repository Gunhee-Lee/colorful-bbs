CC=g++
CFLAGS=-lncurses -Wall

cbbs : main_menu.o 
	$(CC) -o cbbs main_menu.o $(CFLAGS)

main_menu.o : main_menu.cc
	$(CC) -c main_menu.cc 
