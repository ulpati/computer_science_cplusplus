#include <iostream>
using namespace std;

int main() {

    // variabili
    int age;
    double height, weight;
    string size;

    // utente inserisce dati
    cout << "Inserire età: ";
    cin >> age;
    cout << "Inserire altezza in metri: ";
    cin >> height;
    cout << "Inserire peso in Kg: ";
    cin >> weight;

    // calcolo taglia di bicicletta
    if (age <= 10)
    {
        size = "XS";
    }
    else if (age > 10 && age <= 18)
    {
        if (height <= 1.10)
        {
            size = "XS";
        } else if (height > 1.10 && height <= 1.30 && weight <= 40)
        {
            size = "S";
        } else if (height > 1.10 && height <= 1.30 && weight > 40)
        {
            size = "M";
        } else if (height > 1.30 && height <= 1.60)
        {
            size = "M";
        } else if (height > 1.60)
        {
            cout << "Spiacente taglia non disponibile" << endl;
        }
    }
    else 
    {
        if (height <= 1.40 || weight <= 40)
        {
            size = "XS";
        } else if (height > 1.40 && height <= 1.60)
        {
            size = "S";
        } else if (height > 1.60 && height <= 1.70)
        {
            size = "M";
        } else if (height > 1.70 && height <= 1.90)
        {
            size = "L";
        } else if (height > 1.90)
        {
            size = "XL";
        } else
        {
            cout << "Spiacente taglia non disponibile" << endl;
        }
        
    }

    cout << "Telaio bici suggerito: " << size << endl;

    return 0;
}