#include <iostream>
using namespace std;

int main () {

	// chiedere all'utente n numeri da leggere
	int n;
	cout << "Quanti numeri vuoi introdurre?" << endl;
	cin >> n;

	// chiediamo all'utente i numeri
	double sum = 0, num;
	for (int i = 0; i < n; i++)
	{
		cout << "Introdurre numero: ";
		cin >> num;
		sum += num;
	}

	// calcolo della media
	cout << "Media uguale a " << sum / n << endl;

	return 0;
}
