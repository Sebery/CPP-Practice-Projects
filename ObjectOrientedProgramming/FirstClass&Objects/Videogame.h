//
// Created by Sebastian on 16/11/2020.
//

#ifndef FIRSTCLASS_OBJECTS_VIDEOGAME_H
#define FIRSTCLASS_OBJECTS_VIDEOGAME_H

#include <string>
#include <vector>

class Videogame {
public:
    //Attributes
    std::string name{"Undefined"};
    std::vector<std::string> compatibility{"Xbox X", "Ps5", "Nintendo Switch"};

    //Methods
    bool validateCompatibility(const std::string &name_val) {
        for (const auto &console : compatibility) {
            if (console == name_val) return true;
        }

        return false;
    }
};


#endif //FIRSTCLASS_OBJECTS_VIDEOGAME_H
