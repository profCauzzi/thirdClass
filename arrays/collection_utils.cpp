//
// Created by Luciano Cauzzi on 10/10/22.
//
#include <iostream>
using namespace std;

template<typename T, size_t n>
void print_array(const string &message, T const(& arr)[n])
{
    cout << message << ": \t";
    for (size_t i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}