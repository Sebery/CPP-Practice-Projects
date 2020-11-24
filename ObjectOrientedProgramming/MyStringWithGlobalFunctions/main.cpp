#include <iostream>
#include "MyString.h"

int main() {
    std::cout << std::boolalpha;

    MyString empty;
    empty.display();

    MyString name{"SEBASTIAN"};
    name.display();

    empty = name;
    empty.display();

    empty = MyString{"Hi"};
    empty.display();

    name = -name;
    name.display();

    std::cout << "\n" << (name == empty) << "\n";
    std::cout << "\n" << (name != empty) << "\n";

    empty = "sebastian";

    std::cout << "\n" << (name == empty) << "\n";
    std::cout << "\n" << (name != empty) << "\n";

    MyString higher{"z"};
    MyString lower{"a"};

    std::cout << "\n" << (higher < lower) << "\n";
    std::cout << "\n" << (higher > lower) << "\n";

    empty = empty + name;
    empty.display();

    empty += name;
    empty.display();

    empty = empty * 2;
    empty.display();

    empty *= 2;
    empty.display();

    ++empty;
    empty.display();


    return 0;
}
