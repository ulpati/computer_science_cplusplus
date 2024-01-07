# Laboratorio di informatica - 5
### Prof. Stefano Carrazza

**Riassunto:** Esercizi di base in C++: cicli for, while, do/while.

## Esercizio 1 - Hello World for, while e do/while

Scrivere un programma in C++ in cui vengono utilizzate le tre tecniche di loop in C++ per stampare un messaggio sul terminale.

1. Creare un ciclo `for` che stampi per 5 volte il messaggio:
    ```
    Hello World for index = *i*
    ```
    dove `*i*` corrisponde al numero intero che rappresenta l'indice interno del loop.

2. Analogamente, implementare un ciclo `while` in cui si stampati il messaggio:
    ```
    Hello World while index = *i*
    ```

3. Infine, procedere con l'implementazione del ciclo `do/while` con messaggio:
    ```
    Hello World do/while index = *i*
    ```

## Esercizio 2 - Calcolare media (input da terminale)

Scrivere un programma in C++ capace di calcolare la media di numeri introdotti
da terminale utilizzando un ciclo `for`.

1. Chiedere all'utente quanti numeri vuole introdurre. Salvare tale valore in
una variabile di tipo `int n`.

2. Costruire un ciclo `for` che chieda all'utente di introdurre `n` numeri di tipo `double`.

3. Creare una variabile `double sum = 0;` e incrementarla all'interno del loop usando i nuovi valori introdotti dall'utente.

4. Creare una variabile che contenga la media.

5. Stampare risultato su schermo.

## Esercizio 3 - Contatore di numeri pari e dispari

Scrivere un programmi in C++ che calcola il numero totale di numero pari e dispari
introdotti dall'utente utilizzando un ciclo `for` oppure `while`.

1. Creare un ciclo `for` o `while` che chieda all'utente di introdurre numeri interi, in cui la condizione di finalizzazione è data da CTRL+D (`cin.eof()`).

2. Per ogni numero introdotto dall'utente determinare se è pari o dispari usando la condizione if/else. Utilizzare due contattori di tipo `int` per salvare il totale di numeri pari e dispari introdotti dall'utente.

3. Stampare i risultati finali su schermo.

## Esercizio 4 - Calcolare media (input da file)

I dati contengono 1000 numeri corrispondenti a misure fatte in laboratorio della costante di accelerazione di gravità `g`.

1. Leggere tutti i numeri da file usando un ciclo `for` infinito, controllato dalla condizione `eof`.

2. Salvare in una variabile `double sum = 0.0;` la somma incrementale dei numeri.

3. Fare lo stesso per il conteggio del numero totale di elementi.

4. Calcolare media e stamparla su schermo, verificare che il suo valore sia vicino a `g=9.7803184`.

## Esercizio 5 - Calcolare la successione di Fibonacci

Scrivere un programma in C++ che calcoli i primi `n` elementi della successione di Fibonacci.

Un esempio di 13 elementi della successione di Fibonacci sono:
```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
```
dove i primi 2 elementi sono sempre 0 e 1, mentre quelli successivi corrispondono alla somma dei 2 elementi precedenti.

1. Chiedere all'utente quanti elementi della successione di Fibonacci vuole calcolare. Salvare questa informazione in una variabile di tipo `int n`.

2. Implementare un ciclo `for` in cui tutti gli elementi vengano calcolati e stampati.
