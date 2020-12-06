#include <iostream>
#include "Person.h"


template <typename T>
void display(const T &src);

template <typename T>
T sum(const T &src1, const T &src2);



int main() {
    Person myFriend{"Jake", 19};
    Person myBrother{"Steve", 21};

    std::string s1{"Hello "};
    std::string s2{"World!"};

    myBrother = myBrother + myFriend;

    display(myBrother);
    display(12);
    display(2.3);
    display('s');
    display("Hi!");

    myBrother.setAge(sum(myFriend, myBrother).getAge());

    display(myBrother.getAge());
    display(sum(12, 5));
    display(sum(2.3, 1.2));
    display(sum(s1, s2));


    return 0;
}




template <typename T>
void display(const T &src) {
    std::cout << "\n" << src << "\n";
}

template <typename T>
T sum(const T &src1, const T &src2) {
    T test = src1 + src2;

    return test;
}

