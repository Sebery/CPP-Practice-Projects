//
// Created by Sebastian on 21/11/2020.
//

#ifndef MYSTRINGCLASS_MYSTRING_H
#define MYSTRINGCLASS_MYSTRING_H


class MyString {
private:
    char *message;
public:
    //Constructors
    MyString ();
    MyString (const char *messageValue);
    //Copy Constructor
    MyString (const MyString &src);
    //Destructor
    ~MyString();
    //Functions
    void displayMessage ();
    //Assignment Operator
    MyString &operator=(const MyString &src);
    //Move Assignment Operator
    MyString &operator=(MyString &&src);
    //Equality Operator
    bool operator==(const MyString &src);
    //To Lower
    MyString operator-();
    //Concatenate
    MyString operator+(const MyString &src);
};


#endif //MYSTRINGCLASS_MYSTRING_H
