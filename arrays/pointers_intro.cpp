#include "iostream"

using namespace std;

int main() {
    cout << "Pointers" << endl;

    // dichiarazione di un puntatore
    int * p;

    // allocazione di un'area di memoria sufficiente per una variabile del tipo dichiarato
    p = new int;

    // liberazione della memoria associata alla variabile puntatore <identificatore>
    delete p;
}