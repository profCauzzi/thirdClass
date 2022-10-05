#include <iostream>
using namespace std;

int main() {
    cout << "populating arrays" << endl;
    int dim, i, num=1;
    cout << "inserisci la dimensione dell'array: ";
    cin >> dim;
    int my_array[dim];

    for (i=0; i < dim; i++)
    {
        my_array[i] = num;
        num=num+2;
    }

    cout << endl << "stampa i primi 5 valori dell'array" << endl;
    for (i=0; i<5; i++)
    {
        cout << my_array[i] << " ";
    }

    cout << endl << "stampa i valori con indice pari" << endl;
    for (i=0; i < dim; i=i+2)
    {
        cout << "indice: " << i << " valore: " << my_array[i] << " " << endl;
    }

    cout<<endl<<"stampa i valori compresi tra 5 e 15"<<endl;
    for (i=0; i<dim; i++)
    {
        if (my_array[i] > 5 && my_array[i] < 15)
        {
            cout << my_array[i] << " ";
        }
    }

    cout << endl << "stampa il prodotto degli elementi con indici 2 e 7" << endl;
    cout << my_array[2] * my_array[7] << endl;
    return 0;
}
