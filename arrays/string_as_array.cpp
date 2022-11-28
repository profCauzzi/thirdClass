//
// Created by Luciano Cauzzi on 28/11/22.
//
#include "iostream"
#include <vector>
#include <string>
using namespace std;

int main() {
    // inizializzo una stringa e la stampo
    string intro("Uso delle stringhe");
    cout << intro << endl << endl;

    // stampo il primo carattere
    cout << intro[0] << endl;

    // riassegno il primo carattere
    intro[0] = 'T';
    cout << "Nuova intro: " << intro << endl;

    // lunghezza di una stringa
    cout << "La stringa contiene " << intro.length() << " caratteri" << endl;

    // stampo la stringa carattere, indice per indice
    for(int i = 0; i < intro.length(); i++){
        cout << "[" << i << "]: " << intro[i] << endl;
    }

    // stampo uno specifico carattere presente nella stringa
    cout << endl << "Carattere specifico: " << intro.at(17) << endl;

    // sostuisco il carattere con l'indice 14
    intro.at(16) = '?';
    cout << "Risultato: " << intro << endl;

    cout << "Modifichiamo la frase con replace and erase" << endl;
    /**
     * :l’indice da cui iniziare la sostituzione, il numero di caratteri da sostituire e il testo sostitutivo tra doppi apici;
     * nota che il testo sostitutivo può avere lunghezza diversa da quello sostituito, nel qual caso la dimensione della stringa
     * è automaticamente adattata.
     */
    intro.replace(0,3, "TSO");

    /**
     * erase: due argomenti, l’indice del primo carattere da eliminare e il numero di caratteri da eliminare
     * a partire da quello
     */
    intro.erase(10, 8);
    cout << "Risultato:" << intro << endl;
}