#include <iostream>
#include <fstream>
using namespace std;

int main () {

	// apertura file;
	fstream f;
	f.open("data.dat", ios::in);

	if (!f.good()) {
		cout << "Problemi con il file!" << endl;
		return -1;
	}

	// leggiamo i dati dal file
	double num, sum = 0.0;

	// numeri di dati da leggere noto
/*	int n = 1000;
	for (int i = 0; i < n; i++)
	{
		f >> num;
		sum += num;
	}
*/

	// numeri di dati da leggere ignoti
	int n = 0;
	for (;;)
	{
		f >> num;
		if (f.eof()) break;
		sum += num;
		n++;
	}

	f.close();

	cout << "La media è " << sum / n << endl;

	return 0;
}
