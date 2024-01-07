#include <iostream>
using namespace std;

int main ()
{
	double tCelsius;
	int scelta;

	cout << "Inserire temperatura in Celsius: ";
	cin >> tCelsius;

	cout << "Premere 1 per conversione a Kelvin." << endl;
	cout << "Premere 2 per conversione a Fahrenheit." << endl;
	cin >> scelta;

	if (scelta == 1)
	{
		double tKelvin = tCelsius + 273.15;

		cout << "T(Celsius) = " << tCelsius << " -> T(Kelvin) = "
		     << tKelvin << endl;
	} else
	{
		double tFahrenheit = tCelsius * 9.0 / 5.0 + 32.0;

		cout << "T(Celsius) = " << tCelsius << " -> T(Kelvin) = "
		     << tFahrenheit << endl;
	}

	return 0;
}
