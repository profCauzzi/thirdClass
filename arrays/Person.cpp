//
// Created by Luciano Cauzzi on 19/01/23.
//

#include "Person.h"

inline void Person::set_name_surname(std::string name, std::string surname, int years) {
        this -> name = name;
        this -> surname = surname;
        this -> years = years;
}
