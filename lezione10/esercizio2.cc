#include <iostream>
#include <fstream>
#include <cmath>

#include "../../root/include/TApplication.h"
#include "../../root/include/TCanvas.h"
#include "../../root/include/TGraphErrors.h"
#include "../../root/include/TF1.h"
#include "../../root/include/TAxis.h"
#include"../../root/include/TStyle.h"

using namespace std;

int main(int argc, char **argv)
{
    // prepariamo il TApplication
    TApplication app("App", &argc, argv);

    // apertura file
    fstream f;
    f.open("data2.dat", ios::in);
    if (!f.good())
    {
        cout << "Errore apertura file." << endl;
        return 1;
    }

    const int N = 100;
    double t, y;
    TGraphErrors *data = new TGraphErrors(N);
    for (int i = 0; i < N; i++)
    {
        f >> t >> y;
        data->SetPoint(i, t, y);
        data->SetPointError(i, 0, 0.1);
    }

    f.close();

    // create canvas
    TCanvas *c = new TCanvas("c", "Esercizio 2", 600, 400);

    data->SetTitle("Esercizio 2");
    data->GetXaxis()->SetTitle("tempo (s)");
    data->GetYaxis()->SetTitle("y (t)");
    data->Draw("A*"); // * per plottare con *

    TF1 *fit = new TF1("fit", "0.5 * [0] * x^2");
    data->Fit(fit);
    gStyle->SetOptFit(); // aggiunge una didascalia

    c->SaveAs("es2.png");

    // running
    app.Run();

    // delete
    delete c;
    delete data;
    delete fit;

    return 0;
}