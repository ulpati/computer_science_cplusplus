#include <iostream>
using namespace std;

int main () {

	// variabili
	const int n = 3;
	double x[n] = {1, 1, 2};
	double A[n][n] = {{2, 4, 1}, {4, 1, 3}, {1, 3, -2}};
	double B[n][n] = {{1, 1, 1}, {0, 1, 2}, {1, 5, 0}};

	// costruzione di M
	double M[n][n] = {0};
	// M_ij = Sum_k A_ik * B_kj
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				M[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	// prodotto M per x
	// r_i = Sum_k M_ik * x[k]
	double r[n] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			r[i] += M[i][j] * x[j];
		}
		cout << "r[" << i << "] = " << r[i] << endl;
	}

	return 0;
}