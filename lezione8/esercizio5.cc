#include <iostream>
#include <cmath>
using namespace std;

// dichiarazione della struttura mycomplex
struct mycomplex {
    double real;
    double imag;
};

// dichiarazione prototipo funzione print
void print(mycomplex const& v);

// calcola il modulo di un numero complesso
double modulo(mycomplex const& v);

// crea un nuovo oggetto con la somma
mycomplex somma(mycomplex const& a, mycomplex const& b);


void esercizio5()
{
    // creare variabili
    mycomplex a, b;

    // assegnare il numero complesso ad a
    a.real = 7;
    a.imag = 2;

    // assegnare a a b
    b = a;

    // stampare a
    cout << "Printing a:" << endl;
    print(a);

    // stampare b
    cout << "Printing b:" << endl;
    print(b);

    // calcolo il modulo di a
    cout << "Modulo di a = " << modulo(a) << endl;

    // creo l'oggetto somma
    mycomplex c = somma(a,b);
    cout << "Printing c:" << endl;
    print(c);
}

int main() {
    esercizio5();

    return 0;
}


//______________________________
void print (mycomplex const& v)
{
    cout << "(" << v.real << "," << v.imag << ")" << endl;
}

//______________________________
double modulo(mycomplex const& v)
{
    return sqrt(pow(v.real, 2) + pow(v.imag, 2));
}

//______________________________
mycomplex somma(mycomplex const& a, mycomplex const& b)
{
    mycomplex s;
    s.real = a.real + b.real;
    s.imag = a.imag + b.imag;
    return s;
}