all: prog2 prog3 prog4

prog2: esercizio2.cc
	g++ -o prog2 esercizio2.cc `root-config --cflags` `root-config --libs`

prog3: esercizio3.cc
	g++ -o prog3 esercizio3.cc `root-config --cflags` `root-config --libs`

prog4: esercizio4.cc
	g++ -o prog4 esercizio4.cc `root-config --cflags` `root-config --libs`

clean:
	rm prog2 prog3 prog4 esercizio2.png esercizio3.png esercizio4.png