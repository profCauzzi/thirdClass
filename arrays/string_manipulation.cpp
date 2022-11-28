//
// Created by Luciano Cauzzi on 28/11/22.
//
#include "iostream"
#include <vector>
#include <string>
using namespace std;

int main() {

    // inizializzo una stringa e la stampo
    cout << "Manipolazione delle stringhe" << endl;

    string frase("Buona giornata");
    cout << endl << "Frase originale: " << frase << endl;

    string inizio(frase, 0 , 5);
    cout << "Stampa 5 caratteri a partire dalla posizione zero: " << inizio << endl;

    string fine(frase, 6);
    cout << "Stampa i caratteri a partire dalla posizione 6: " << fine << endl;

    string selezione(frase, 7, 3);
    cout << "Stampa 3 caratteri a partire dalla posizione 7: " << selezione << endl;

    string ripetizione(5, '*');
    cout << endl << "Ripetizione molteplice di un carattere: " << ripetizione << endl;

}