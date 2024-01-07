#include <iostream>
#include "../../root/include/TCanvas.h"
#include "../../root/include/TF1.h"
#include "../../root/include/TApplication.h"
#include "../../root/include/TVirtualPad.h"
#include "../../root/include/TAxis.h"
using namespace std;

// ROOT
void esercizio1() {

    // costruzione del TF1
    TCanvas *c1 = new TCanvas("c1", "Plot", 600, 400);
    TF1 *f1 = new TF1("f1","sin(x*x)/x + 0.01 * x*x", -3, 3);

    f1->SetTitle("Esercizio 1");
    f1->GetXaxis()->SetTitle("x");
    f1->GetYaxis()->SetTitle("y");

    f1->SetLineColor(kBlue);

    f1->Draw();
    c1->SaveAs("plot1.png");
}

int main() {
    esercizio1();

    return 0;
}