#include <iostream>
#include <cmath>
using namespace std;

// calcola la distanza tra i punti (x, y) e (xc, yc)
double distanza(double x, double y, double xc, double yc)
{
	return sqrt(pow(x - xc, 2) + pow(y - yc, 2));
}

// verifica se un punto (x, y) si trova dentro il cerchio
void check_circle(double x, double y, double xc, double yc, double r, bool &status)
{
	double d = distanza(x, y, xc, yc);
	if (d <= r)
		status = true;
	else
		status = false;
}

int main() {

	// variabili
	const double xc = 1, yc = 1, r = 1;
	double x, y;
	bool status;

	for(;;)
	{
		cout << "Introdurre coordinate (x,y): " << endl;
		cin >> x >> y;
		
		if (cin.eof()) break;

		check_circle(x, y, xc, yc, r, status);
		if (status)
			cout << "Il punto è dentro il cerchio." << endl;
		else
			cout << "Il punto non è dentro il cerchio." << endl;
	}

	return 0;
}
