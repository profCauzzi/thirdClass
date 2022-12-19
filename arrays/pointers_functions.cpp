//
// Created by Luciano Cauzzi on 19/12/22.
//
#include "iostream"

using namespace std;

int double_number(int* number);

int main() {
    cout << "Pointers and functions" << endl;
    int a = 10;
    int* pointer = &a;
    cout << endl << "il valore restituito dalla funzione double_number: ";
    cout << double_number(pointer) << endl;
    cout << endl << "Al termine della funzione main A vale: " << a;
}

/**
 * Moltiplica per 2 il valore di number
 * La variabile viene passata per indirizzotramite il puntatore
 * @param number
 * @return
 */
int double_number(int* number){
    *number *= 2;
    return *number;
}