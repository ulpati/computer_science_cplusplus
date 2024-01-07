#include <iostream>
using namespace std;

int main()
{
	double base = 5.0, altezza = 2.0;
	double area = base * altezza;
	double perimetro = 2 * (base + altezza);

	cout << "Base rettangolo: " << base << endl;
	cout << "Atezza rettangolo: " << altezza << endl;
	cout << "Area rettangolo: " << area << endl;
	cout << "Perimetro rettangolo: " << perimetro << endl;

	return 0;
}
