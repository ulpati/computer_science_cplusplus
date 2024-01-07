#include <iostream>
using namespace std;

int main()
{
	double base, altezza;

	cout << "Inserire valore base rettangolo: ";
	cin >> base;
	cout << "Inserire valore altezza rettangolo: ";
	cin >> altezza;

	double area = base * altezza;
	double perimetro = 2 * (base + altezza);

	cout << "Base rettangolo: " << base << endl;
	cout << "Atezza rettangolo: " << altezza << endl;
	cout.precision(10);
	cout << fixed;
	cout << "Area rettangolo: " << area << endl;
	cout << "Perimetro rettangolo: " << perimetro << endl;
	cout << scientific;
	cout << "Area rettangolo = " << area
	     <<"\tPerimetro = " << perimetro << endl;

	return 0;
}
