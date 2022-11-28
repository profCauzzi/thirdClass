//
// Created by Luciano Cauzzi on 28/11/22.
//
#include "iostream"
#include <vector>
using namespace std;

int main() {
    cout << "Array di caratteri" << endl;

    char color [] = "rosso";

    // sizeof: quantità di memoria utilizzata per rappresentare l'oggetto nella parentesi
    cout << "La dimensione dell'array e' " << sizeof(color) << endl;
    cout << "Gli elementi dell'array sono:" << endl;
    int i = 0;
    while (color[i] != '\0'){
        cout << color[i] << endl;
        i++;
    }
}