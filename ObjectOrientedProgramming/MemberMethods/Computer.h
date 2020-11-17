//
// Created by Sebastian on 16/11/2020.
//

#ifndef MEMBERMETHODS_COMPUTER_H
#define MEMBERMETHODS_COMPUTER_H

#include <string>

class Computer {
private:
    //Attributes
    std::string typeName;
    double ram;
    std::string processor;
public:
    //Methods
    std::string getType () { return typeName; }
    double getRam () { return ram; }
    std::string getProcessor () { return processor; }

    void setType (std::string typeValue) { typeName = typeValue; }
    void setRam (double ramValue) { ram = ramValue; }
    void setProcessor (std::string processorValue) { processor = processorValue; }

    void validateRam (const std::string &program);
    void validateType (const std::string &role);
};


#endif //MEMBERMETHODS_COMPUTER_H
