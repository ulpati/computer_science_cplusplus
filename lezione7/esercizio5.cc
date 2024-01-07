#include <iostream>
#include <cmath>
using namespace std;

double scalar(const double a[], const double b[], int n);
double norm(const double a[], int n);
void scambia(double &a, double &b);
void trasposta(double M[][3], int dim);

int main() {

    // variabili
    const int n = 5;
    const double v[n] = {1,2,3,4,5};
    const double w[n] = {10,2,4,3,2};
    double M[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // calcola prodotto scalare
    cout << "Prodotto Scalare: " << scalar(v, w, n) << endl;

    // calcola la norma
    cout << "Norma: " << norm(v, n) << endl;

    // calcola matrice trasposta
    cout << "Matrice Originale:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    // applica la funzione scambia per ottenere la trasposta
    trasposta(M, 3);

    cout << "Matrice Trasposta:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    return 0;
}

// prodotto scalare
double scalar(const double a[], const double b[], int n)
{
    double s = 0;
    for (int i = 0; i < n; i++)
        s += a[i] * b[i];
    return s;
}

// calcola norma dell'array
double norm(const double a[], int n)
{
    double s = scalar(a, a, n);
    return sqrt(s);
}

// scambia due valori per riferimento
void scambia(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

// calcola la matrice trasposta
void trasposta(double M[][3], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            scambia(M[i][j], M[j][i]);
        }
    }
}