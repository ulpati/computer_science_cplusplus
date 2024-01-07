CC = g++

all: prog1 prog2 prog4 prog5 prog6

prog1: esercizio1.cc
	$(CC) -o $@ $<

prog2: esercizio2.cc funzioni.cc
	$(CC) -o $@ esercizio2.cc funzioni.cc

prog4: esercizio4.cc
	$(CC) -o $@ $<

prog5: esercizio5.cc
	$(CC) -o $@ $<

prog6: esercizio6.cc
	$(CC) -o $@ $<

clean:
	rm prog1 prog2 prog4 prog5 prog6
