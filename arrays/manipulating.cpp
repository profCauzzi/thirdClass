#include <iostream>
using namespace std;

int main() {
    float times[] = {12.4, 13.0, 13.3, 13.8, 14.0, 14.5};
    int athletes = sizeof(times) / sizeof (float);
    cout << "Classifica:" << endl << "posizione: \t times:" << endl;
    for (int i = 0; i < athletes; i++) {
        cout << i + 1 << " \t\t " << times[i] << " s " << endl;
    }

    for (int i = 1; i < athletes; i++) {
        cout << "Il distacco tra l'atleta " << i << " e l'atleta " << i + 1;
        cout << " e' " << times[i] - times[i - 1] << " secondi" << endl;
    }
}