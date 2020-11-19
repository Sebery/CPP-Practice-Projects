//
// Created by Sebastian on 18/11/2020.
//

#ifndef COPYCONSTRUCTOR_PHONE_H
#define COPYCONSTRUCTOR_PHONE_H

#include <string>

class Phone {
private:
    std::string name;
    std::string os;
    double cost;
public:
    //Constructor
    Phone (std::string nameValue = "-", std::string osValue = "-", double costValue = 0.0);
    //Copy Constructor
    Phone (const Phone &src);
    //Destructor
    ~Phone ();
    //Functions
    void displayData ();
    //Getters
    std::string getName () { return name; };
    std::string getOs () { return os; };
    double getCost () { return cost; };
};


#endif //COPYCONSTRUCTOR_PHONE_H
