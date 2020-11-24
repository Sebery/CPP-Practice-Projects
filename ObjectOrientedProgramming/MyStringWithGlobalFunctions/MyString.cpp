//
// Created by Sebastian on 23/11/2020.
//
#include "MyString.h"

#include <cstring>
#include <iostream>

//Constructors
MyString::MyString ()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *src)
    : str{nullptr} {
    if (src == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(src) + 1];
        std::strcpy(str, src);
    }
}

//Copy Constructor
MyString::MyString(const MyString &src)
    : str{nullptr} {
    str = new char[std::strlen(src.str) + 1];
    std::strcpy(str, src.str);
}

//Move Constructor
MyString::MyString(MyString &src)
    : str{src.str} {
    src.str = nullptr;
}

//Destructor
MyString::~MyString() {
    delete [] str;
}

//Display Method
void MyString::display() {
    std::cout << "\n" << str << "\n";
}

//Copy Assignment
MyString & MyString::operator=(const MyString &src) {
    delete [] str;
    str = new char[std::strlen(src.str) + 1];
    std::strcpy(str, src.str);

    return *this;
}

//Move Assignment
MyString & MyString::operator=(MyString &&src) {
    delete [] str;
    str = src.str;
    src.str = nullptr;

    return *this;
}

//Minus Operator
MyString operator-(MyString &src) {
    size_t size{std::strlen(src.str) + 1};
    char *buffer = new char[size];
    std::strcpy(buffer, src.str);

    for (size_t i{0}; i < size; i++) {
        buffer[i] = std::tolower(buffer[i]);
    }

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

//Equal Operator
bool operator==(const MyString &left, const MyString &right) {
    return (std::strcmp(left.str, right.str) == 0);
}

//Not Equal Operator
bool operator!=(const MyString &left, const MyString &right) {
    return (std::strcmp(left.str, right.str) != 0);
}

//Less Than Operator
bool operator<(const MyString &left, const MyString &right) {
    return (std::strcmp(left.str, right.str) == -1);
}

//Greater Than Operator
bool operator>(const MyString &left, const MyString &right) {
    return (std::strcmp(left.str, right.str) == 1);
}

//Plus Operator
MyString operator+(const MyString &left, const MyString &right) {
    size_t size{std::strlen(left.str) + std::strlen(right.str) + 1};
    char *buffer = new char[size];
    std::strcpy(buffer, left.str);
    std::strcat(buffer, right.str);

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

//Plus Equal Operator
MyString &operator+=(MyString &left, const MyString &right) {
    left.operator=(operator+(left, right));

    return left;
}

//Multiplication Operator
MyString operator*(const MyString &src, const int &&num) {
    size_t size{std::strlen(src.str) * num + 1};
    char *buffer = new char[size];
    std::strcpy(buffer, src.str);

    for (size_t i{0}; i < (num - 1); i++) {
        std::strcat(buffer, src.str);
    }

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

//Multiplication Equal Operator
MyString &operator*=(MyString &src, const int &&num) {
    src.operator=(operator*(src, num + 0));

    return src;
}

//Pre Increment Operator
MyString &operator++(MyString &src) {

    for (size_t i{0}; i < std::strlen(src.str); i++) {
        src.str[i] = std::toupper(src.str[i]);
    }

    return src;
}

//Post Increment Operator
MyString operator++(MyString &src, int) {
    MyString temp{src};
    operator++(src);


    return temp;
}








































