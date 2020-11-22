//
// Created by Sebastian on 21/11/2020.
//

#include "MyString.h"
#include <iostream>
#include <cstring>

//Constructors
MyString::MyString()
    : message{nullptr} {
    message = new char[1];
    *message = '\0';
}

MyString::MyString(const char *messageValue)
    : message{nullptr} {
    if (messageValue == nullptr) {
        message = new char[1];
        *message = '\0';
    } else {
        message = new char[std::strlen(messageValue) + 1];
        std::strcpy(message, messageValue);
    }
}

//Copy Constructor
MyString::MyString(const MyString &src)
    : message{nullptr} {
    message = new char[std::strlen(src.message) + 1];
    strcpy(message, src.message);
}


//Destructors
MyString::~MyString() {
    delete [] message;
}

//Assignment Operator
MyString &MyString::operator=(const MyString &src) {
    std::cout << "\nCopy Assignment\n";

    if (this == &src)
        return *this;

    delete [] message;
    message = new char[std::strlen(src.message) + 1];
    std::strcpy(message, src.message);

    return *this;
}

//Move Assignment Operator
MyString & MyString::operator=(MyString &&src) {
    std::cout << "\nMove Assignment\n";

    if (this == &src)
        return *this;

    delete [] message;
    message = src.message;
    src.message = nullptr;

    return *this;
}

//Equality Operator
bool MyString::operator==(const MyString &src) {
    std::cout << "\nEquality Operator\n";
    return (std::strcmp(message, src.message) == 0);
}

//To Lower
MyString MyString::operator-() {
    char *buff{nullptr};
    buff = new char[std::strlen(message) + 1];

    for (size_t i{0}; i < (std::strlen(message) + 1); i++) {
        buff[i] = std::tolower(message[i]);
    }


    MyString temp{buff};
    delete [] buff;

    return temp;
}

//Concatenate
MyString MyString::operator+(const MyString &src) {
    char *buff = new char[std::strlen(message) + std::strlen(src.message) + 1];
    std::strcpy(buff, message);
    std::strcat(buff, src.message);

    MyString temp{buff};
    delete [] buff;
    return temp;
}


//Functions
void MyString::displayMessage() {
    std::cout << "\n" << message << "\n";
}