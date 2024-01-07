#include <iostream>
using namespace std;

int main () {

	// variabili
	int n, elemento; // int definito in  32 bit [-2^31, 2^31-1]
	int primo = 0, secondo = 1;

	cout << "Introdurre numeri di elementi della successione di "
	     << "Fibonacci (n > 2): ";
	cin >> n;

	// calcolo
	cout << "Primi " << n << " elementi della successione di "
	     << "Fibonacci:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i <= 1)
			elemento = i;
		else
		{
			elemento = primo + secondo;
			primo = secondo;
			secondo = elemento;
		}
		cout << elemento << endl;
	}

	return 0;
}
