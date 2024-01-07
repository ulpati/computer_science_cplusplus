#include <iostream>
#include <fstream>
#include "../../root/include/TCanvas.h"
#include "../../root/include/TF1.h"
#include "../../root/include/TApplication.h"
#include "../../root/include/TGraph.h"
#include "../../root/include/TAxis.h"
using namespace std;

// ROOT
void esercizio5() {

    // lettura da file
    const int n = 100;
    double x[n], y[n], y2[n];

    fstream f;
    f.open("data.dat", ios::in);
    if (!f.good())
    {
        cout << "Errore apertura file." << endl;
        return;
    }

    // lettura da file
    for (int i = 0; i < n; i++)
    {
        f >> x[i] >> y[i] >> y2[i];
    }

    f.close();

    // grafica
    TCanvas *c1 = new TCanvas("c1", "Esercizio 5A", 600, 400);

    TGraph *g1 = new TGraph(n, x, y);
    g1->SetTitle("(x,y)");
    g1->GetXaxis()->SetTitle("x");
    g1->GetYaxis()->SetTitle("y");
    g1->Draw("A*");

    g1->Fit("poll");

    c1->SaveAs("plot5A.png");

    // grafica 2
    TCanvas *c2 = new TCanvas("c2", "Esercizio 5B", 600, 400);
    
    TGraph *g2 = new TGraph(n, x, y2);
    g2->SetTitle("(x,y2)");
    g2->GetXaxis()->SetTitle("x");
    g2->GetYaxis()->SetTitle("y2");
    g2->Draw("A*");

    // g2->Fit("pol2");
    TF1 *f1 = new TF1("f1", "[0] * x^2 + [1] * x + [2]", 0, 1);
    g2->Fit("f1");

    c2->SaveAs("plot5B.png");
}

int main() {
    esercizio5();

    return 0;
}