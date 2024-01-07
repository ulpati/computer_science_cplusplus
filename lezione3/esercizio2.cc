#include <iostream>
using namespace std;

int main ()
{
	int n;

	cout << "Inserire un numero intero: ";
	cin >> n;

	int resto = n % 2;
	if (resto == 0)
	{
		cout << "Il numero " << n << " è pari." << endl;
	} else
	{
		cout << "Il numero " << n << " è dispari." << endl;
	}

	return 0;
}
