//
// Created by Sebastian on 22/11/2020.
//

#ifndef MYSTRINGWITHMEMBERMETHODS_MYSTRING_H
#define MYSTRINGWITHMEMBERMETHODS_MYSTRING_H

#include <iostream>

class MyString {
    friend std::ostream &operator<<(std::ostream &os, const MyString &src);
    //friend std::istream &operator>>(std::istream &is, MyString &src);

private:
    char *str;
public:
    //Constructors
    MyString();
    MyString(const char *s);
    //Copy Constructor
    MyString (const MyString &src);
    //Move Constructor
    MyString (MyString &&src);
    //Destructor
    ~MyString();

    //Display Str
    void display();

    //Assignment Operator
    MyString &operator=(const MyString &src);
    MyString &operator=(MyString &&src);

    //Minus Operator
    MyString operator-();

    //Equal Operator
    bool operator==(const MyString &src);

    //Not Equal Operator
    bool operator!=(const MyString &src);

    //Less Operator
    bool operator<(const MyString &src);

    //Greater Operator
    bool operator>(const MyString &src);

    //Plus Operator
    MyString operator+(const MyString &src);

    //Plus Equal Operator
    MyString &operator+=(MyString &src);
    MyString &operator+=(MyString &&src);

    //Multi Operator
    MyString operator*(size_t &&num);
    MyString operator*(const size_t &num);

    //Multi Equal Operator
    MyString &operator*=(size_t &&num);

    //Pre-Increment Operator
    MyString &operator++();

    //Post-Increment Operator
    MyString operator++(int);
};


#endif //MYSTRINGWITHMEMBERMETHODS_MYSTRING_H
