//
// Created by Sebastian on 06/12/2020.
//

#ifndef TEMPLATEFUNCTIONS_PERSON_H
#define TEMPLATEFUNCTIONS_PERSON_H

#include <string>
#include <iostream>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    friend Person operator+(const Person &p1, const Person &p2);
private:
    std::string name;
    int age;
public:
    Person (std::string nameValue, int ageValue);
    int getAge() { return age; };
    void setAge(int value) { age = value; };
    ~Person () = default;
};


#endif //TEMPLATEFUNCTIONS_PERSON_H
