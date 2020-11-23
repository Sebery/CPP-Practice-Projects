#include <iostream>
#include "MyString.h"

int main() {
    std::cout << std::boolalpha;

    MyString hello{"HELLO WORLD"};
    hello.display();

    hello = -hello;
    hello.display();

    MyString message{"Nice"};

    std::cout << "\n" << hello << " equal to " << message << " = " << (hello == message) << "\n";

    hello = "Nice";

    std::cout << "\n" << hello << " equal to " << message << " = " << (hello == message) << "\n";

    hello = "Whatsapp";

    std::cout << "\n" << hello << " different to " << message << " != " << (hello != message) << "\n";

    hello = "Nice";

    std::cout << "\n" << hello << " different to " << message << " != " << (hello != message) << "\n";

    hello = "a";
    message = "B";

    std::cout << "\n" << hello << " less than " << message << " < " << (hello < message) << "\n";
    std::cout << "\n" << hello << " greater than " << message << " > " << (hello > message) << "\n";

    std::cout << "\n" << (hello + message) << "\n";

    hello += message;
    hello += "migo";
    std::cout << "\n" << hello << "\n";

    hello = "Friend, ";
    std::cout << "\n" << hello * 6 << "\n";

    hello *= 3;
    std::cout << "\n" << hello << "\n";

    MyString test{"Testing"};
    test += "123";
    std::cout << "\n" << test << "\n";

    std::cout << "\n" << ++test << "\n";

    return 0;
}
