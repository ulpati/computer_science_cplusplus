#include <iostream>
using namespace std;

int main ()
{
	int n, r = 2;

	cout << "Inserire un numero intero: ";
	cin >> n;

	int incremento = n, decremento = n;
	incremento++;
	decremento--;
	int divisione = n / r, resto = n % r;

	cout << "Incremento: " << incremento << endl;
	cout << "Decremento: " << decremento << endl;
	cout << "Divisione : " << divisione << endl;
	cout << "Resto     : " << resto << endl;

	return 0;
}
