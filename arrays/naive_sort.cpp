#include <iostream>
using namespace std;

void printVector(char message[], int size, int elements []);

int main() {
    cout << "Naive sort" << endl;
    const int races = 10;
    int ranking[races] = {5, 1, 3, 3, 4, 1, 2, 5, 2, 1};
    int jmax, scambio;

    char first_msg [] = "Vettore iniziale: \t";
    printVector(first_msg, races, ranking);

    for (int i=0; i < races; i++){
        jmax = i;

        for (int j= i + 1; j < races; j++){
            /* *
             * Trovo il valore massimo fra i primi races-1-i elementi,
             * ovvero tra gli elementi non ancora riordinati
             * */
            if (ranking[j] > ranking[jmax]) {
                jmax = j;
            }
        }
        scambio = ranking[jmax];
        ranking[jmax] = ranking[i];
        ranking[i] = scambio;
    }
    char msg [] = "Vettore finale: \t";
    printVector(msg, races, ranking);
    return 0;
}

void printVector(char message[], int size, int elements []){
    cout << endl << message << endl;
    for (int i = 0; i < size; i++)
        cout << elements[i] << " ";
}