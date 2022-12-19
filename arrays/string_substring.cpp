#include "iostream"
#include <vector>

using namespace std;

int main() {
    // inizializzo una stringa e la stampo
    string frase("Buona giornata");
    cout << "Stringa di partenza: " << frase << endl << endl;

    /**
     * Nota: la ricerca parte dall'indice 0 e, se trovo la
     * sottostringa cercata, stampo l'indice corrispondente
     */
    cout << "Cerco la sottostringa 'Bu'; Risultato: ";
    if (frase.find("Bu", 0) != string::npos){
        cout << frase.find("Bu", 0) << endl;
    } else {
        cout << "Non trovato" << endl;
    }

    cout << "Cerco la sottostringa 'xx'; Risultato: ";
    if (frase.find("xx", 0) != string::npos){
        cout << frase.find("xx", 0) << endl;
    } else {
        cout << "Non trovato" << endl;
    }

    /**
     * La ricerca può dare esito a più occorrenze trovate.
     */
    cout << "Cerco la sottostringa 'na'; Risultato: ";
    size_t i = frase.find("na", 0);
    size_t n;
    while(i != string::npos){
        cout << i << " ";               // stampo gli indici trovati
        n = i + 1;
        i = frase.find("na", n); // i = nuovo indice trovato
    }
}