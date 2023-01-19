//
// Created by Luciano Cauzzi on 19/01/23.
//
#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    cout << "OOP first example" << endl;
    Person p = Person("Luciano", "Cauzzi", 38);
    cout << p.introduce() << endl;

    p.set_name("Alberto");
    cout << p.introduce() << endl;
    return 0;
}