//
// Created by Luciano Cauzzi on 22/02/23.
//
#include <iostream>
using namespace std;

class Parallelogram {   // classe base o superclasse
public:
    float side1, side2;
    bool has_straight_angle;

    Parallelogram(float side1, float side2, bool has_straight_angle = false){
        this -> side1 = side1;
        this -> side2 = side2;
        this -> has_straight_angle = has_straight_angle;
    }

    float get_perimeter(){
        return 2 * (side1 + side2);
    }

    string get_description(){
        return has_straight_angle ? "rettangolo" : "parallelogrammo";
    }
};

