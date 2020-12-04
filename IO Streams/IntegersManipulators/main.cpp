#include <iostream>
#include <iomanip>

int main() {
    int num{127};

    //DECIMAL NUMBER
    std::cout << "\n===============DECIMAL=================\n";
    std::cout << std::dec;
    std::cout << num << "\n";

    //HEXAGESIMAL NUMBER
    std::cout << "\n===============HEXAGESIMAL=================\n";
    std::cout << std::hex;
    std::cout << num << "\n";

    //OCTAGONAL NUMBER
    std::cout << "\n===============OCTAGONAL=================\n";
    std::cout << std::oct;
    std::cout << num << "\n";

    //DECIMAL NUMBER(SHOWBASE)
    std::cout << std::showbase;
    std::cout << "\n===============DECIMAL(SHOWBASE)=================\n";
    std::cout << std::dec;
    std::cout << num << "\n";

    //HEXAGESIMAL NUMBER(SHOWBASE)
    std::cout << "\n===============HEXAGESIMAL(SHOWBASE)=================\n";
    std::cout << std::hex;
    std::cout << num << "\n";

    //OCTAGONAL NUMBER(SHOWBASE)
    std::cout << "\n===============OCTAGONAL(SHOWBASE)=================\n";
    std::cout << std::oct;
    std::cout << num << "\n";

    //DECIMAL NUMBER(SHOWBASE AND UPPERCASE)
    std::cout << std::showbase << std::uppercase;
    std::cout << "\n===============DECIMAL(SHOWBASE AND UPPERCASE)=================\n";
    std::cout << std::dec;
    std::cout << num << "\n";

    //HEXAGESIMAL NUMBER(SHOWBASE AND UPPERCASE)
    std::cout << "\n===============HEXAGESIMAL(SHOWBASE AND UPPERCASE)=================\n";
    std::cout << std::hex;
    std::cout << num << "\n";

    //OCTAGONAL NUMBER(SHOWBASE AND UPPERCASE)
    std::cout << "\n===============OCTAGONAL(SHOWBASE AND UPPERCASE)=================\n";
    std::cout << std::oct;
    std::cout << num << "\n";

    //DECIMAL NUMBER(SHOW POS)
    std::cout << std::showpos;
    std::cout << "\n===============DECIMAL(SHOW POS)=================\n";
    std::cout << std::dec;
    std::cout << num << "\n";
    std::cout << (num * -1) << "\n";

    //RESET MANIPULATORS
    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::uppercase);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::showpos);

    std::cout << "\n========================================================\n";
    std::cout << "Please, enter a number: ";
    std::cin >> num;

    std::cout << std::showbase << std::uppercase << std::showpos;
    std::cout << "Decimal: " << std::dec << num << "\n";
    std::cout << "Hexagesimal: " << std::hex << num << "\n";
    std::cout << "Octagonal: " << std::oct << num << "\n";





    return 0;
}
