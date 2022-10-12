/*
* Created by Luciano Cauzzi on 11/10/22.
 * Esercizio n23 pag 103
*/

#include "iostream"
#include "collection_utils.cpp"
using namespace std;

void build_symmetric_array(int a[], int dim);

int main(){
    cout << "Esercizio n23" << endl;
    const int dim = 6;
    int my_array [dim]= {1, 2, 3, 4, 5, 7};
    print_array("Array iniziale", my_array);
    build_symmetric_array(my_array, dim);
    print_array("Array finale", my_array);
    return 0;
}

void build_symmetric_array(int a[], int dim){
    /*
    * Dovrò scambiare gli elementi finchè sono arrivato a metà dell'array
    */
    int upperBound = dim / 2;
    for (int i = 0; i < upperBound; i++){
        int temp = a[i];
        a[i] = a[dim -1 -i];
        a[dim -1 -i] = temp;
    }
}




