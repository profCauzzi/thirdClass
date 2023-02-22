//
// Created by Luciano Cauzzi on 23/01/23.
//

#ifndef THIRDCLASS_VOTO_H
#define THIRDCLASS_VOTO_H
#include <string>

class Mark {
public:
    float spoken;
    float written;

    float get_mean(){
        return (spoken + written) / 2;
    }

    std::string get_description(){
        std::string msg = "La media vale: " + std::to_string(get_mean());
        return msg;
    }
};


#endif //THIRDCLASS_VOTO_H
