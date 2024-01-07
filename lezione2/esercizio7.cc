#include <iostream>
using namespace std;

int main ()
{
	double tCelsius;

	cout << "Inserire temperatura in Celsius: ";
	cin >> tCelsius;

	double tKelvin = tCelsius + 273.15;

	cout << "Temperatura in Celsius: " << tCelsius << endl;
	cout << "Temeratura in Kelvin: " << tKelvin << endl;

	return 0;
}
