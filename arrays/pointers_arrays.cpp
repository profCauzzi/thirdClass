//
// Created by Luciano Cauzzi on 19/12/22.
//
#include "iostream"

using namespace std;

int main() {
    cout << "Pointers arrays" << endl;
    int my_array [] = {1, 2, 3};
    int* my_pointer = my_array;
    cout << endl;
    cout << "Stampo i primi due indirizzi: " << my_pointer << " " << my_pointer + 1 << endl;
    cout << endl;
    cout << "Stampo i primi due valori: " << *my_pointer << " " << *(my_pointer + 1) << endl;
}