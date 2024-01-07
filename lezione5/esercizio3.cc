#include <iostream>
using namespace std;

int main () {

	// variabili
	int numero;
	int pari = 0, dispari = 0;

	cout << "Introdurre dei numeri interi: ";

	// risoluzione con ciclo for
	for (;;)
	{
		cin >> numero;
		if (cin.eof()) break;

		if (numero % 2 == 0)
			pari++;
		else
			dispari++;
	}

	// risoluzione con ciclo while
/*
	cin >> numero;
	while (!cin.eof())
	{
		if (numero % 2 == 0)
			pari++;
		else
			dispari++;

		cin >> numero;
	}
*/

	// stampa risultati finali
	cout << endl;
	cout << "Totale numeri pari: " << pari << endl;
	cout << "Totale numeri dispari: " << dispari << endl;

	return 0;
}
