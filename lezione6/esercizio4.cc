#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

#define N 1000

int main() {

	// variabili
	double spazio, tempo;
	double v[N];

	// apertura file
	fstream f;
	f.open("data_moto.dat", ios::in);

	if (!f.good()) {
		cout << "Errore di lettura del file data_moto.dat"
		     << endl;
		return 1;
	}

	// lettura dati
	for (int i = 0; i < N; i++) {
		f >> spazio >> tempo;
		v[i] = spazio / tempo; // velocità istantanea
	}

	f.close();

	// calcolare la velocità media
	double sum = 0;
	for (int i = 0; i < N; i++) {
		sum += v[i];
	}

	double vmedia = sum/N;
	cout << "Velocità media = " << vmedia << endl;

	// calcolare la std dev
	double sum2 = 0;
	for (int i = 0; i < N; i++) {
		sum2 += pow(v[i] - vmedia, 2);
	}

	double sigma = sqrt(sum2 / (N-1));
	cout << "Dev. standard = " << sigma << endl;

	// calcolo velocità massima
	double vmax = v[0];
	for (int i = 1; i < N; i++) {
		if (v[i] > vmax) {
			vmax = v[i];
		}
	}
	cout << "Velocità massima = " << vmax << endl;

	// calcolare velocità minima
	double vmin = v[0];
	for (int i = 1; i < N; i++) {
		if (v[i] < vmin) {
			vmin = v[i];
		}
	}
	cout << "Velocità minima = " << vmin << endl;

	return 0;
}
