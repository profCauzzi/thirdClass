#include <iostream>

using namespace std;

/**
 * Questa struttura dati conterrà due elementi
 * - array di interi
 * - dimensione array
 *
 * Esempio:
 * const int dim = 40;
 * int a [dim];
 * Container c = Container();
 * c.dim = dim;
 * c.arr = a;
 *
 * Esempio:
 * const int dim = 40;
 * int a [dim];
 * Container c = Container(dim, a);
 */
struct Container{
    int* arr; // array di interi
    int dim; // dimensione array

    Container(){

    }
    /**
     * Costruttore: è una particolare funzione che permette di inizializzare
     * un struttura dati.
     * @param length dimensione array
     * @param ar array di interi
     */
    Container(int length): dim(length),                 // assegno a "dim" il valore del parametro "length"
                           arr(new int[length]){       // assegno a "arr" il valore del nuovo array che avrà dimensione lenght
    }
};

// Prototipi di funzione
Container get_even_array(int my_array[], int dim);
int get_elements_count(const int my_array[], int dim, bool isEven);
bool is_number_even(const int *my_array, int i);

int main() {
    cout << "Vettori pari" << endl;
    const int dim = 4;
    int a [dim] = {2, 2, 3, 4};

    Container result = get_even_array(a, dim);

    // Stampo l'array
    for (int i = 0; i < result.dim; i++){
        cout << result.arr[i] << endl;
    }
    return 0;
}

Container get_even_array(int my_array[], const int dim){

    const int event_count = get_elements_count(my_array, dim, true);
    int j = 0;
    Container c = Container(event_count);
    c.dim = event_count;
    for (int i = 0; i < dim; i++){
        if (is_number_even(my_array, i)){
            c.arr[j] = my_array[i];
            j++;
        }
    }
    return c;
}

bool is_number_even(const int *my_array, int i) { return my_array[i] % 2 == 0; }

int get_elements_count(const int my_array[], int dim, bool isEven){
    int count = 0;
    for (int i = 0; i < dim ; i++){
        if (my_array[i] % 2 == 0 && isEven){
            count++;
        }

        if (my_array[i] % 2 != 0 && !isEven){
            count++;
        }
    }
    return count;
}