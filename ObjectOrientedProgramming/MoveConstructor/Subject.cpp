//
// Created by Sebastian on 19/11/2020.
//

#include "Subject.h"
#include <iostream>

//Constructor
Subject::Subject(std::string nameValue, double gradeValue) {
    name = new std::string;
    *name = nameValue;

    grade = new double;
    *grade = gradeValue;

    std::cout << "\nMain Constructor called: " << *name << "\n";
}

//Copy Constructor
Subject::Subject(const Subject &src)
    : Subject{*src.name, *src.grade} {
    std::cout << "\nCopy Constructor called: " << *name << "\n";
}

//Move Constructor
Subject::Subject(Subject &&src)
    : name{src.name}, grade{src.grade} {
    src.name = nullptr;
    src.grade = nullptr;
    std::cout << "\nMove Constructor called: " << *name << "\n";
}

//Destructor
Subject::~Subject() {
    if (name == nullptr)
        std::cout << "\nDestructor called: nullptr\n";
    else
        std::cout << "\nDestructor called: " << *name << "\n";

    delete name;
    delete grade;
}

//Function
void Subject::displayValues() {
    std::cout << "\nName: " << *name << "\n";
    std::cout << "Grade: " << *grade << "\n\n";
}
