//
// Created by Sebastian on 23/11/2020.
//

#ifndef MYSTRINGWITHGLOBALFUNCTIONS_MYSTRING_H
#define MYSTRINGWITHGLOBALFUNCTIONS_MYSTRING_H

#include <iostream>

class MyString {
    //Minus Operator
    friend MyString operator-(MyString &src);
    //Equal Operator
    friend bool operator==(const MyString &left, const MyString &right);
    //Not Equal Operator
    friend bool operator!=(const MyString &left, const MyString &right);
    //Less Than Operator
    friend bool operator<(const MyString &left, const MyString &right);
    //Greater Than Operator
    friend bool operator>(const MyString &left, const MyString &right);
    //Plus Operator
    friend MyString operator+(const MyString &left, const MyString &right);
    //Plus Equal Operator
    friend MyString &operator+=(MyString &left, const MyString &right);
    //Multiplication Operator
    friend MyString operator*(const MyString &src, const int &&num);
    //Multiplication Equal Operator
    friend MyString &operator*=(MyString &src, const int &&num);
    //Pre Increment Operator
    friend MyString &operator++(MyString &src);
    //Post Increment Operator
    friend MyString operator++(MyString &src, int);
private:
    char *str;
public:
    //Constructors
    MyString ();
    MyString (const char *src);
    //Copy Constructor
    MyString (const MyString &src);
    //Move Constructor
    MyString (MyString &src);
    //Destructor
    ~MyString ();
    //Display Method
    void display ();
    //Copy Assignment
    MyString &operator=(const MyString &src);
    //Move Assignment
    MyString &operator=(MyString &&src);
};


#endif //MYSTRINGWITHGLOBALFUNCTIONS_MYSTRING_H
