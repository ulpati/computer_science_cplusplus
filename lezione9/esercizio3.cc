#include <iostream>
#include "../../root/include/TCanvas.h"
#include "../../root/include/TF1.h"
#include "../../root/include/TApplication.h"
#include "../../root/include/TAxis.h"
using namespace std;

void esercizio3() {
TCanvas *c1 = new TCanvas("c1", "Esercizio 3A", 600, 400);

TF1 *f1 = new TF1("f1", "x^2", -5, 5);
f1->SetTitle("Esercizio 3A");
f1->GetXaxis()->SetTitle("x");
f1->GetYaxis()->SetTitle("y");
f1->Draw();

c1->SaveAs("plot3A.png");

TCanvas *c2 = new TCanvas("c2", "Esercizio 3B", 600, 400);
TF1 *f2 = new TF1("f2", "sin(x)/x", -5, 5);
f2->SetTitle("Esercizio 3B");
f2->GetXaxis()->SetTitle("x");
f2->GetYaxis()->SetTitle("y");
f2->Draw();

c2->SaveAs("plot3B.png");
}

int main() {
    esercizio3();
    
    return 0;
}