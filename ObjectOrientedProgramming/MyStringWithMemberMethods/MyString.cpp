//
// Created by Sebastian on 22/11/2020.
//

#include "MyString.h"

#include <cstring>
#include <iostream>

//Constructors
MyString::MyString()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s)
    : str{nullptr} {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

//Copy Constructor
MyString::MyString(const MyString &src)
    : str{nullptr} {
    str = new char[std::strlen(src.str) + 1];
    std::strcpy(str, src.str);
}

//Move Constructor
MyString::MyString(MyString &&src)
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
    if (this == &src)
        return *this;

    delete [] str;
    str = new char[std::strlen(src.str) + 1];
    std::strcpy(str, src.str);
    return *this;
}

//Move Assignment
MyString & MyString::operator=(MyString &&src) {
    if (this == &src)
        return *this;

    delete [] str;
    str = src.str;
    src.str = nullptr;

    return *this;
}

//Minus Operator
MyString MyString::operator-() {
    char *buffer = new char[std::strlen(str) + 1];

    for (size_t i{0}; i < std::strlen(str) + 1; i++) {
        buffer[i] = std::tolower(str[i]);
    }

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

//Copy Equality Operator
bool MyString::operator==(const MyString &src) {
    return (std::strcmp(str, src.str) == 0);
}

//Not Equal Operator
bool MyString::operator!=(const MyString &src) {
    return (std::strcmp(str, src.str) != 0);
}

//>> Operator
/*std::istream &operator>>(std::istream is, MyString &src) {
    char *buffer = new char[100];
    is >> buffer;
    src = MyString{buffer};
    delete [] buffer;

    return is;
} */

//<< Operator
std::ostream &operator<<(std::ostream &os, const MyString &src) {
    os << src.str;

    return os;
}

//Less Operator
bool MyString::operator<(const MyString &src) {
    return (std::strcmp(str, src.str) == -1);
}

//Greater Operator
bool MyString::operator>(const MyString &src) {
    return (std::strcmp(str, src.str) == 1);
}

//Plus Operator
MyString MyString::operator+(const MyString &src) {
    size_t size = std::strlen(str) + std::strlen(src.str) + 1;
    char *buffer = new char[size];
    std::strcpy(buffer, str);
    std::strcat(buffer, src.str);

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

//Plus Equal Operator
MyString &MyString::operator+=(MyString &src) {
    operator=(operator+(src));
    //*this = *this + src;

    return *this;
}

MyString &MyString::operator+=(MyString &&src) {

    operator=(operator+(src));
    //*this = *this + src;

    return *this;
}

//Multi Operator
MyString MyString::operator*(size_t &&num) {
    size_t size = std::strlen(str) * num + 1;
    char *buffer = new char[size];
    std::strcpy(buffer, str);

    for (size_t i{num - 1}; i > 0; i--) {
        std::strcat(buffer, str);
    }

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

MyString MyString::operator*(const size_t &num) {
    size_t size = std::strlen(str) * num + 1;
    char *buffer = new char[size];
    std::strcpy(buffer, str);

    for (size_t i{num - 1}; i > 0; i--) {
        std::strcat(buffer, str);
    }

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

//Multi Equal Operator
MyString &MyString::operator*=(size_t &&num) {
    *this = *this * num;

    return *this;
}

//Pre-Increment Operator
MyString & MyString::operator++() {
    for (size_t i{0}; i < std::strlen(str) + 1; i++) {
        str[i] = std::toupper(str[i]);
    }


    return *this;
}

//Post-Increment Operator
MyString MyString::operator++(int) {
    MyString temp{*this};

    operator++();

    return temp;
}



























