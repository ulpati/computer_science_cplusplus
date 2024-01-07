CC = g++

all: prog1 prog2 prog3 prog4 prog5

prog1: esercizio1.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog2: esercizio2.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog3: esercizio3.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog4: esercizio4.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog5: esercizio5.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

clean:
	rm prog* plot*