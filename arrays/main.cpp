#include <iostream>
using namespace std;

int main() {
    cout << "Arrays" << endl;

    int my_integer_array[10];

    int num = 10;
    int my_integer_array_bis[num];

    int numbersList[]= {1, 2, 3, 4};

    cout << "Contenuto di numbersList" << endl;
    for (int i = 0; i < 4; i++){
        cout << "[" << i << "]: " << numbersList[i] << endl;
    }
    cout << endl;

    cout << "Contenuto di my_integer_array" << endl;
    for (int i = 0; i < 10; i++){
        cout << "[" << i << "]: " << my_integer_array[i] << endl;
    }

    cout << endl;

    return 0;
}
