//
// Created by Luciano Cauzzi on 22/02/23.
//
#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    cout << "OOP Inheritance" << endl;
    Parallelogram p = Parallelogram(7.3, 4.5, false);
    float perimeter = p.get_perimeter();
    cout << "[Parallelogram]: Il perimetro vale " << perimeter << endl;

    Rectangle r = Rectangle(5,7);
    cout << "[Rectangle]: Il perimetro vale " << r.get_perimeter() << ", l'area vale " << r.get_area() << endl;
    return 0;
}