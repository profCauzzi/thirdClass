//
// Created by Luciano Cauzzi on 10/10/22.
//
#include <iostream>
#include "array_utils.cpp"

using namespace std;

int main () {
    cout << "Ordering bubble sort" << endl;

    //memorizziamo i dati in un array
    const int races = 10;
    int places[races] = {5, 1, 3, 3, 4, 1, 2, 5, 2, 1};
    int jmax, scambio;

    print_array("Vettore iniziale", places);

    // ciclo esterno che itera su tutti gli indici dell'array
    int i, j;
    for (i = 0; i < races - 1; i++)

        // Scorriamo la parte di vettore non ordinato
        for (j = 0; j < races - i - 1; j++)
            if (places[j] > places[j + 1]) {
                int temp = places[j];
                places[j] = places[j+1];
                places[j+1] = temp;
            }
    print_array("vettore finale", places);
}

