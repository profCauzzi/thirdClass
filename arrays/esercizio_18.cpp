//
// Created by Luciano Cauzzi on 11/10/22.
//
#include "iostream"
#include "collection_utils.cpp"
using namespace std;

void find_min(const int my_array[], int baseIndex, int dim, int &result, int &result_index);

int main(){
    cout << "Esercizio n18" << endl;
    const int dim = 5;
    int my_array [dim]= {2, 25, 7, 13, 9};
    print_array("Array iniziale", my_array);

    int index = 3;
    int result, result_index;
    find_min(my_array, index, dim, result, result_index);
    cout << "Indice [" << result_index << "], valore [" << result << "]" << endl;
    return 0;
}

void find_min(const int my_array[], int baseIndex, int dim, int &result, int &result_index){
    // il testo dell'esercizio parte la numerazione da 1
    // in questo caso baseIndex punta alla variabile successiva
    // Assegno il minimo al primo valore indicato dall'indice
    result = my_array[baseIndex];
    result_index = baseIndex;

    // percorro la seconda parte  dell'array alla ricerca
    // del minimo
    for(int i = baseIndex + 1; i < dim; i++){
        if (my_array[i] < result){
            result = my_array[i];
            result_index = i;
        }
    }

    // incremento l'indice di uno perchè il testo dell'esercizio
    // numera i valori a partire da 1
    result_index++;
}