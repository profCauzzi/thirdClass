//
// Created by Luciano Cauzzi on 19/12/22.
//
#include "iostream"

using namespace std;

int main() {
    cout << "Pointers example" << endl;
    int a = 5;
    // dichiarazione di un puntatore
    int * p = &a;
    cout << "L'indirizzo in memoria della variabile a e' : " << p << " mentre il suo valore e' " << *p << endl;

    *p = 7;

    cout << "L'indirizzo in memoria della variabile a e' : " << p << " mentre il suo valore e' " << *p << endl;
}