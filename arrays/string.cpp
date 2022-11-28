#include "iostream"
#include <vector>
#include <string>
using namespace std;

int main() {
    // inizializzo una stringa e la stampo
    string intro("Uso delle stringhe");
    cout << intro << endl << endl;

    // chiedo all'utente due stringhe
    string nominativo;
    cout << "Scrivi nome e cognome: " << endl;
    getline(cin, nominativo);
    string indirizzo;

    cout << "Scrivi l'indirizzo: " << endl;
    getline(cin, indirizzo); // acquisisce una linea e ha come argomenti cin (flusso in ingresso) e variabile di destinazione

    // concateno (unisco) le stringhe e le stampo
    cout << "L'indirizzo inserito e':" << endl;
    string finale = nominativo + ", " + indirizzo;
    cout << finale << endl;
}