#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
	char nome[20];
	string cognome;
	int matricola;
	fstream foutput;

	cout << "Nome     : ";
	cin >> nome;
	cout << "Cognome  : ";
	cin >> cognome;
	cout << "Matricola: ";
	cin >> matricola;
	cout << cognome << ", " << nome << " è registrato con "
	     << "numero matricola: " << matricola << "." << endl;

	foutput.open("risultato.dat",ios::out);
	if (foutput.good())
	{
		foutput << cognome << ", " << nome << " è registrato"
			<< " con numero matricola: " << matricola
			<< "." << endl;
	} else
	{
		cout << "Errore: file is not good!" << endl;
	}
	foutput.close();

	return 0;
}
