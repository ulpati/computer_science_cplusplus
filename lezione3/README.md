# Laboratorio di informatica - 3
### Prof. Stefano Carrazza

**Riassunto:** Esercizi di base in C++: strings, cin, cout, file IO, if e else.

## Esercizio 1 - Incremento/decremento

Scrivere un programma in C++ in cui:

1. Il programma vi chiede di introdurre un numero intero `n`.

2. Calcolare l'incremento e il decremento di `n` usando gli operatori `++` e `--`.

3. Calcolare la divisione e il modulo (resto) di `n` per un `int r = 2;`.

5. Stampare tutti i risultati su schermo.

## Esercizio 2 - Numeri pari e dispari

Scrivere un programma che prende un numero intero e determina se si tratta di un
numero pari oppure dispari. Per farlo utilizzare l'operatore modulo assieme ad
operatori di selezione two-way (`if`, `else`).

## Esercizio 3 - string e char

Scrivere un programma in C++ in cui:

1. Vi chiede come input da terminale il vostro nome, cognome e numero matricola. Utilizzare variabili di tipo `char nome[20];` per il nome, `string` per il cognome e `int` per il numero matricola. Implementare l'interfaccia nel modo seguente:
```text
Nome     :
Cognome  :
Matricola:
```

2. Stampare con `cout` una riga con la sintassi seguente:
```bash
<cognome>, <nome> è registrato con numero matricola: <matricola>.
```

## Esercizio 4 - File output

Adattare l'esercizio precedente in modo che l'output finale sia scritto su un
file chiamato `risultato.dat`.

1. Creare una copia dell'esercizio precedente.
2. Implementare con `fstream` la creazione del file di output con il metodo `open()`,
seguito dal test di successo con il metodo `good()`.
3. Scrivere il contenuto su schermo e file.
4. Chiudere il file con il metodo `close()`.

## Esercizio 5 - File input

Adattare l'esercizio precedente in modo che l'input sia letto da un file chiamato
`myinput.dat` con il contenuto seguente:
```
<vostro nome>
<vostro cognome>
<vostro numero di matricola>
```

1. Creare una copia dell'esercizio precedente.
2. Implementare con `fstream` la apertura del file `myinput.dat`.
3. Leggere i dati da file.
4. Chiudere il file.
5. Stampare i risultati su schermo e file `risultato.dat`.
