//
// Created by Luciano Cauzzi on 11/10/22.
//
#include "iostream"
#include <vector>
using namespace std;

int main(){
    cout << "Vector bis" << endl;

    vector <int> mio_array;		// nb: non ha dimensione prestabilita
    cout << endl << " dimensione di mio_array: " << mio_array.size();

    // uso un ciclo iterativo e il metodo push_back
    // per inizializzare mio_array con i primi 5 quadrati perfetti
    for (int i=1; i<=5; i++) {
        mio_array.push_back(i*i);
    }

    cout << endl << endl << " dimensione di mio_array: " << mio_array.size();
    cout << endl << " adesso mio_array contiene i valori: ";

    for (int i=0; i<mio_array.size(); i++) {
        cout<<" "<< mio_array[i];
    }

    // cancello il terzo elemento
    mio_array.erase(mio_array.begin()+2);
    cout << endl << endl << " dimensione di mio_array: " << mio_array.size();
    cout << endl << " adesso mio_array contiene i valori: ";
    for (int i=0; i<mio_array.size(); i++) {
        cout<<" "<< mio_array[i];
    }

    // inserisco all'inizio dell'array il valore -100
    mio_array.insert(mio_array.begin(),-100);
    cout << endl << endl << " dimensione di mio_array: " << mio_array.size();
    cout << endl << " adesso mio_array contiene i valori: ";

    for (int i=0; i<mio_array.size(); i++) {
        cout<<" "<< mio_array[i];
    }
}