#include <iostream>
using namespace std;

int main() {
    cout << "shift arrays" << endl;
    float times[] = {12.4, 13.0, 13.3, 13.8, 14.0, 14.5};
    float penalized = times[0] + 10;
    int athletes = sizeof(times) / sizeof (float);
    for (int i = 1; i < athletes; i++){
        times[i-1] = times[i];
    }
    times[athletes -1] = penalized;

    cout << "Classifica:" << endl << "posizione: \t times:" << endl;
    for (int i = 0; i < athletes; i++) {
        cout << i + 1 << " \t\t " << times[i] << " s " << endl;
    }
    return 0;
}
