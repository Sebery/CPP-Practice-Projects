//
// Created by Sebastian on 21/11/2020.
//

#ifndef MYARRAYCLASS_MYARRAY_H
#define MYARRAYCLASS_MYARRAY_H

#include <string>
#include <vector>

class MyArray {
private:
    std::vector<std::string> *data;
public:
    //Constructors
    MyArray ();
    MyArray (std::vector<std::string> &dataValue);
    //Copy Constructor
    MyArray (MyArray &src);
    //Destructor
    ~MyArray ();
    //Assignment Operator
    MyArray &operator=(const MyArray &src);
    std::vector<std::string> &operator=(const std::vector<std::string> &src);
    //Add Operator
    MyArray operator+(const MyArray &src);
    //Functions
    void displayData ();
};


#endif //MYARRAYCLASS_MYARRAY_H
