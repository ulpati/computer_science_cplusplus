#include <iostream>
#include <fstream>
#include <cmath>

#include "../../root/include/TApplication.h"
#include "../../root/include/TCanvas.h"
#include "../../root/include/TGraph.h"
#include "../../root/include/TAxis.h"

using namespace std;


struct point2d
{
    double x, y;
};


double distance(point2d p)
{
    return sqrt(pow(p.x - 0.5, 2) + pow(p.y - 0.5, 2));
}


int main(int argc, char **argv) 
{
    // updating application
    TApplication app("App", &argc, argv);

    // aprire file e leggere il contenuto
    fstream f;
    f.open("data1.dat", ios::in);
    if (!f.good())
    {
        cout << "Errore lettura file." << endl;
        return 1;
    }

    const int N = 1000;
    point2d *p = new point2d[N];
    for (int i = 0; i < N; i++)
        f >> p[i].x >> p[i].y;

    f.close();

    // creare canvas
    TCanvas *c = new TCanvas("c", "Esercizio 1", 800, 800);

    TGraph *g1 = new TGraph(); // punti all'interno del cerchio
    TGraph *g2 = new TGraph(); // punti all'esterno del cerchio
    g1->SetMarkerColor(kBlue);
    g2->SetMarkerColor(kRed);

    int index1 = 0, index2 = 0;
    for (int i = 0; i < N; i++)
    {
        if (distance(p[i]) < 0.5)
        {
            g1->SetPoint(index1, p[i].x, p[i].y);
            index1++;
        }
        else
        {
            g2->SetPoint(index2, p[i].x, p[i].y);
            index2++;
        }     
    }

   g1->SetTitle("Esercizio 1");
   g1->GetXaxis()->SetTitle("x coordinate");
   g1->GetYaxis()->SetTitle("y coordinate");
   g1->GetXaxis()->SetRangeUser(0, 1);
   g1->GetYaxis()->SetRangeUser(0, 1);

   g1->Draw("A*");
   g2->Draw("same*");
   
   c->SaveAs("es1.png");
    // running the application
    app.Run();

    // free memory
    delete c;
    delete[] p;
    delete g1;
    delete g2;

    return 0;
}