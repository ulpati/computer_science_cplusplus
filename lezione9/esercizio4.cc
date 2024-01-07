#include <iostream>
#include "../../root/include/TCanvas.h"
#include "../../root/include/TF1.h"
#include "../../root/include/TApplication.h"
using namespace std;

int main(int argc, char **argv)
{
    // updating application
    TApplication app("App", &argc, argv);

    TCanvas *c = new TCanvas("c", "Esercizio 4", 800, 500);

    TF1 *f = new TF1("f", "1/x", -10, 10);
    f->Draw();

    c->SaveAs("plot4.png");

    // running the application
    app.Run();

    // free memory
    delete f;
    delete c;

    return 0;
}