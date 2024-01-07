#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

struct point2d {
    double *coordinate;
    double distance;
};

void compute_distance(point2d &p)
{
    p.distance = sqrt(pow(p.coordinate[0], 2) + pow(p.coordinate[1], 2));
}

double mean(point2d *v, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i].distance;
    return sum / n;
}

void esercizio6() {
    
    const int n = 1000;
    point2d punti[n];

    fstream f;
    f.open("data.dat", ios::in);
    if (!f.good())
    {
        cout << "Errore apertura file data.dat" << endl;
        return;
    }

    // loading
    for (int i = 0; i < n; i++)
    {
        punti[i].coordinate = new double[2];
        f >> punti[i].coordinate[0] >> punti[i].coordinate[1];
        compute_distance(punti[i]);
    }

    f.close();

    cout << "Media = " << mean(punti, n) << endl;

    // clean up
    for (int i = 0; i < n; i++)
        delete[] punti[i].coordinate;
}

int main() {
    esercizio6();

    return 0;
}