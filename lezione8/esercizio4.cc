#include <iostream>
#include <cmath>
using namespace std;

void esercizio4() {

    // variabili
    const int n = 1000;
    double *w = new double[n];
    for (int i = 0; i < n; i++)
        w[i] = rand() % 100;

    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += w[i];

    cout << "Valore media = " << sum / n << endl;

    delete[] w;
}

int main() {
    esercizio4();

    return 0;
}