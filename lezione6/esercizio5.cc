#include <iostream>
#include <fstream>
using namespace std;

int main () {

	// variabili
	const int n = 10000;
	double mass[n];

	// apertura file dati
	fstream f;
	f.open("data_higgs.dat", ios::in);

	if(!f.good())
	{
		cout << "Errore lettura file data_higgs.dat" << endl;
		return 1;
	}

	// lettura
	for (int i = 0; i < n; i++)
		f >> mass[i];

	f.close();

	// ordinare l'array in modo crescente, usando il selection sort
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (mass[i] > mass[j])
			{
				double tmp = mass[i];
				mass[i] = mass[j];
				mass[j] = tmp;
			}

	// stampare minimo e massimo
	const double massmin = mass[0];
	const double massmax = mass[n-1];
	cout << "Massa minima = " << massmin << endl;
	cout << "Massa massima = " << massmax << endl;

	// costruire il binning e istogramma frequenze
	int nbins = int((massmax - massmin) / 5) + 1;
	double *bins = new double[nbins];
	int *freq = new int[nbins];

	// inizializzare bins
	for (int i = 0; i < nbins; i++)
	{
		bins[i] = mass[0] + i * 5.0;
		freq[i] = 0;
	}

	// istogrammare
	for (int i = 0; i < n; i++)
		for (int b = 0; b < nbins; b++)
			if (mass[i] <= bins[b+1])
			{
				freq[b]++;
				break;
			}

	cout << endl;
	cout << "Istogramma:" << endl;
	for (int b = 0; b < nbins; b++)
		cout << "M = " << bins[b] << " GeV -> freq = "
		     << freq[b] << endl;

	// determinare indice in cui la freq è massima
	int fmax = 0;
	int freqmax = freq[0];
	for (int b = 0; b < nbins; b++)
		if (freq[b] > freqmax)
		{
			fmax = b;
			freqmax = freq[b];
		}

	cout << endl;
	cout << "Valore del bin più frequente M = " << bins[fmax]
	     << " GeV con freq = " << freq[fmax] << endl;

	delete[] bins;
	delete[] freq;

	return 0;
}