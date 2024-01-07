#include <iostream>
using namespace std;

int main() {

	// punto 1: creazione delle variabili e puntatore
	double x = 5.5;
	double *p = NULL;

	// punto 2: stampare su terminale
	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;
	cout << "&p = " << &p << endl;

	// punto 3: assegnare &x a p
	p = &x;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;

	// punto 4: chiedere un nuovo double
	cout << "Introdurre un double: ";
	cin >> *p;

	// controllare il nuovo valore di x
	cout << "x = " << x << endl;

	// punto 5
	int n = 10;
	double *v = new double[n];
	cout << "&v = " << &v << endl;
	for (int i = 0; i < n; i++)
		cout << "&v[" << i << "] = " << &v[i] << endl;

	// pulire la memory
	delete[] v;

	return 0;
}
