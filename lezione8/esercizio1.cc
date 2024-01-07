#include <iostream>
#include <cmath>
using namespace std;

// dichiarazione della struct complex
struct complex {
	double real;
	double imag;
};

// dichiarazione prototipo funzione print
void print(complex v);

// calcola il modulo di un numero complesso
double modulo(complex v);

// crea un nuovo oggetto con la somma
complex somma(complex a, complex b);

int main() {

	// creare variabili
	complex a, b;

	// assegnare il numero complesso ad a
	a.real = 7;
	a.imag = 2;

	// assegnare a a b
	b = a;

	// stampare a
	cout << "Printing a:" << endl;
	print(a);

	// stampare b
	cout << "Printing b:" << endl;
	print(b);

	// calcolo il modulo di a
	cout << "Modulo di a = " << modulo(a) << endl;

	// creo l'oggetto somma
	complex c = somma(a, b);
	cout << "Printing c:" << endl;
	print(c);

	return 0;
}

//______________________________
void print(complex v)
{
	cout << "(" << v.real << "," << v.imag << ")" << endl;
}

//______________________________
double modulo(complex v)
{
	return sqrt(pow(v.real, 2) + pow(v.imag, 2));
}

//_______________________________
complex somma(complex a, complex b)
{
	complex s;
	s.real = a.real + b.real;
	s.imag = a.imag + b.imag;
	return s;
}
