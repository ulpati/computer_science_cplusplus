#include <iostream>
using namespace std;

int main() {

    // variabili
    int matricola;

    // utente inserisce dati
    cout << "Inserire numero di matricola: ";
    cin >> matricola;

    // condizione switch
    switch (matricola)
    {
    case 112233:
        cout << "NOME" << endl;
        break;
    
    default:
        cout << "Matricola non trovata" << endl;
        break;
    }

    return 0;
}