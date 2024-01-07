#include <iostream>
#include <string>
using namespace std;

int main ()
{
	char nome[20];
	string cognome;
	int matricola;

	cout << "Nome     : ";
	cin >> nome;
	cout << "Cognome  : ";
	cin >> cognome;
	cout << "Matricola: ";
	cin >> matricola;
	cout << cognome << ", " << nome << " è registrato con "
	     << "numero matricola: " << matricola << "." << endl;

	return 0;
}
