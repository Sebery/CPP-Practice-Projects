//
// Created by Sebastian on 21/11/2020.
//

#include "MyArray.h"
#include <iostream>

//Constructors
MyArray::MyArray()
    : data{nullptr} {
    data = new std::vector<std::string>;
}

MyArray::MyArray(std::vector<std::string> &dataValue)
    : data{nullptr} {
    data = new std::vector<std::string>;

    for (const auto &c : dataValue) {
        data->push_back(c);
    }
}

//Destructor
MyArray::~MyArray() {
    delete data;
}

//Copy Constructor
MyArray::MyArray(MyArray &src)
    : data{src.data} {
    src.data = nullptr;
}

//Assignment Operator
MyArray & MyArray::operator=(const MyArray &src) {
    std::cout << "\n= OPERATOR\n";

    if (this == &src)
        return *this;

    data->clear();
    for (const auto &c : *src.data) {
        data->push_back(c);
    }

    return *this;
}

std::vector<std::string> & MyArray::operator=(const std::vector<std::string> &src) {
    data->clear();
    for (const auto &c : src) {
        data->push_back(c);
    }

    return *data;
}

//Add Operator
MyArray MyArray::operator+(const MyArray &src) {
    std::cout << "\nAdd Operator\n";

    auto *buffer = new std::vector<std::string>;
    for (const auto &c : *data) {
        buffer->push_back(c);
    }

    for (const auto &c : *src.data) {
        buffer->push_back(c);
    }

    MyArray temp{*buffer};
    delete buffer;

    return temp;
}

//Functions
void MyArray::displayData() {
    std::cout << "\n";
    for (const auto &c : *data) {
        std::cout << c << "\n";
    }
    std::cout << "\n";
}


