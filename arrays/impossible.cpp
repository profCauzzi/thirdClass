#include <iostream>
using namespace std;

int main(){
    cout << "Impossible" << endl;
    const int dim = 3;
    int my_array [dim];
    my_array[4] = 7;

    cout << "my_array[4]: " << my_array[4] << endl;
}