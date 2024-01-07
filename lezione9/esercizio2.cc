#include <iostream>
#include "../../root/include/TCanvas.h"
#include "../../root/include/TF1.h"
#include "../../root/include/TApplication.h"
#include "../../root/include/TAxis.h"
using namespace std;

void esercizio2() {

    TCanvas *c1 = new TCanvas("c1", "esercizio 2", 600, 400);

    // TF1
    TF1 *f1 = new TF1("f1", "-sin(x*x)/x + 0.01*x*x", -3, 3);
    f1->SetTitle("Esercizio 2");
    f1->GetXaxis()->SetTitle("x");
    f1->GetYaxis()->SetTitle("y");
    f1->SetLineColor(kBlue);
    f1->Draw();

    TF1 *f2 = new TF1("f2", "0.1*sin(4*x)/x", -3, 3);
    f2->Draw("same");

    TF1 *f3 = new TF1("f3", "0.5*x", -3, 3);
    f3->SetLineColor(kGreen);
    f3->Draw("same");
    
    c1->SaveAs("plot2.png");
}

int main() {
    esercizio2();

    return 0;
}
