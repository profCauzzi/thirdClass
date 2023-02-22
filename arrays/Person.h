//
// Created by Luciano Cauzzi on 19/01/23.
//

#ifndef POINTERS_ARRAYS_PERSON_H
#define POINTERS_ARRAYS_PERSON_H

using namespace std;
#include <string>

class Person {
private:
    string name;
    string surname;
    int years;



public:
    Person(string name, string surname, int years){
        set_name_surname(name, surname, years);
    }

    void set_name_surname(string name, string surname, int years);

    string get_name(){
        return name;
    }

    void set_name(string name){
        this -> name = name;
    }

    string get_surname(){
        return surname;
    }

    void set_surname(string surname){
        this -> surname = surname;
    }

    string introduce(){
        string result = "Mi chiamo " + name + " " + surname + " e ho " + std::to_string(years) + " anni";
        return result;
    }

    // verifichiamo che sia maggiorenne
    bool is_adult(){
        // da implementare
        return true;
    }
};


#endif //POINTERS_ARRAYS_PERSON_H
