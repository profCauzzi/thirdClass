//
// Created by Luciano Cauzzi on 22/02/23.
//
#include "Parallelogram.h"

class Rectangle: public Parallelogram{ // classe derivata
public:

    Rectangle(float side1, float side2) : Parallelogram(side1, side2, true) {
    }

    float get_area(){
        return side1 * side2;
    }
};

