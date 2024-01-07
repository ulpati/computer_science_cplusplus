# Laboratorio di informatica - 10

**Riassunto:** Esercizi di base in C++: Data filtering e Error bar plot

## Esercizio 1 - ROOT data filtering

Scrivere un programma in C++ in cui:

- Scrivere una struct point2d per le coordinate
- Scrivere una funzione che calcola la distanza tra un punto e il centro del cerchio in (0.5,0.5)
- Leggere le coordinate dal file data1.dat
- Rappresentare i punti su un grafico con colori diversi per dentro/fuori dal cerchio (raggio 0.5)
- Salvare il grafico in es1.png


## Esercizio 2 - ROOT Error bar plot
Scrivere un programma in C++ per rappresentare le coordiante di un oggetto in moto uniformemente accelerato:

- Leggere le coordinate dal file data2.dat considerando l'errore sull'asse x nullo e sull'asse y costante a 0.1
- Rappresentare le coordinate sul grafico
- Tracciare un fit usando la forma parametrica $y(t) = 1/2 \cdot a \cdot t^2$
- Salvare il grafico in es2.png