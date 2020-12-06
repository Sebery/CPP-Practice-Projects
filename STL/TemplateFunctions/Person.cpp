//
// Created by Sebastian on 06/12/2020.
//

#include "Person.h"

Person::Person(std::string nameValue, int ageValue)
    : name{nameValue}, age{ageValue} {

}

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name;
    return os;
}

Person operator+(const Person &p1, const Person &p2) {

    return Person{p1.name, p1.age + p2.age};
}
