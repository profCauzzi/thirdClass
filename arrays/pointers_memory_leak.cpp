#include "iostream"

using namespace std;

int main() {
    cout << "Pointers memory leak" << endl;
    {
        int * p; // inserimento di p nello stack
        p = new int; // allocazione di una variabile di tipo intero nello heap
    } // rimozione di p dallo stack: memory leak!
    return 0;
}