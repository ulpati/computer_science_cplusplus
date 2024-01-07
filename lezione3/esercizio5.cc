#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
	char nome[20];
	string cognome;
	int matricola;
	fstream finput;
	fstream foutput;

	finput.open("myinput.dat", ios::in);

	if (!finput.good())
	{
		cout << "Cannot open myinput.dat" << endl;
		return -1;
	}

	finput >> nome;
	finput >> cognome;
	finput >> matricola;

	finput.close();

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
