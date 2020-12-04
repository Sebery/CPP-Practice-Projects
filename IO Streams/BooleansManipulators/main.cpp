#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string a{'a'};
    std::string b{'b'};

    //Default Boolean Manipulator
    std::cout << "\n==============DEFAULT====================\n";
    std::cout << "---> ('a' == 'b') = " << (a == b) << "\n";
    std::cout << "---> ('a' != 'b') = " << (a != b) << "\n";

    //BOOLALPHA Manipulator
    std::cout << "\n==============BOOLALPHA====================\n";
    std::cout << std::boolalpha;
    std::cout << "---> ('a' == 'b') = " << (a == b) << "\n";
    std::cout << "---> ('a' != 'b') = " << (a != b) << "\n";

    //NOBOOLALPHA Manipulator
    std::cout << "\n==============NOBOOLALPHA====================\n";
    std::cout << std::noboolalpha;
    std::cout << "---> ('a' == 'b') = " << (a == b) << "\n";
    std::cout << "---> ('a' != 'b') = " << (a != b) << "\n";

    //BOOLALPHA Manipulator (Method Version)
    std::cout << "\n==============BOOLALPHA(METHOD VERSION)====================\n";
    std::cout.setf(std::ios::boolalpha);
    std::cout << "---> ('a' == 'b') = " << (a == b) << "\n";
    std::cout << "---> ('a' != 'b') = " << (a != b) << "\n";

    //DEFAULT Boolean (Method Version)
    std::cout << "\n==============DEFAULT(METHOD VERSION)====================\n";
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "---> ('a' == 'b') = " << (a == b) << "\n";
    std::cout << "---> ('a' != 'b') = " << (a != b) << "\n";

    return 0;
}
