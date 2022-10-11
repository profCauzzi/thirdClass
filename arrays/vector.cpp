//
// Created by Luciano Cauzzi on 11/10/22.
//
#include "iostream"
#include <vector>
using namespace std;

int main() {
    cout << "Vector" << endl;
    vector<int> my_vector(2);
    my_vector[0] = 3;
    my_vector[1] = 5;

    cout << "Vector size is: " << my_vector.size() << endl;

    my_vector.push_back(5);
    my_vector.push_back(8);

    cout << "Vector size is: " << my_vector.size() << endl;

    for(int i = 0; i < my_vector.size(); i++){
        cout << my_vector[i] << " ";
    }
    cout << endl;
}