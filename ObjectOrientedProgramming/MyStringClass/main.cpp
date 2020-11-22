#include <iostream>
#include "MyString.h"
#include <cstring>
#include <vector>

int main() {
    MyString basicMessage;

    basicMessage.displayMessage();

    MyString hello{"Hello World"};
    hello.displayMessage();

    MyString copy{hello};
    copy.displayMessage();

    MyString goodbye{"Goodbye Friend"};
    goodbye.displayMessage();

    copy = goodbye;
    copy.displayMessage();

    std::vector<MyString> says{{"\nHello "}, {"My"}, {" Friend\n"}};

    for (MyString &message : says) {
        message.displayMessage();
    }

    for (MyString &message : says) {
        message = " - ";
    }

    for (MyString &message : says) {
        message.displayMessage();
    }

    MyString name{"Sebery"};
    name.displayMessage();

    name = MyString{"Sebastian"};
    name.displayMessage();

    MyString myName{"Sebery"};
    MyString friendName{"Sebery"};

    if (myName == friendName) {
        std::cout << "\nSebery is equal\n";
    }

    myName = -myName;
    myName.displayMessage();

    MyString hey{"Hey "};
    MyString there{"there!"};
    MyString all;

    all = hey + there;
    all.displayMessage();



    return 0;
}
