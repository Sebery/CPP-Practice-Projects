#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string message{"Say Hello!"};

    //DEFAULT
    std::cout << "\n========================================\n";
    std::cout << message << message << "\n";

    //FIRST MESSAGE WIDTH
    std::cout << "\n========================================\n";
    std::cout << std::setw(15) << message << message << "\n";

    //BOTH MESSAGES WIDTH
    std::cout << "\n========================================\n";
    std::cout << std::setw(15) << message << std::setw(15) << message << "\n";

    //BOTH MESSAGES WIDTH (RIGHT)
    std::cout << std::right;
    std::cout << "\n========================================\n";
    std::cout << std::setw(15) << message << std::setw(15) << message << "\n";

    //BOTH MESSAGES WIDTH (LEFT)
    std::cout << std::left;
    std::cout << "\n========================================\n";
    std::cout << std::setw(15) << message << std::setw(15) << message << "\n";

    //BOTH MESSAGES WIDTH (LEFT)
    std::cout << std::right;
    std::cout << "\n========================================\n";
    std::cout << std::setw(15) << message << std::setw(15) << std::left << message << "\n";

    //BOTH MESSAGES WIDTH (LEFT) (setfill)
    std::cout << std::left;
    std::cout << std::setfill('%');
    std::cout << "\n========================================\n";
    std::cout << std::setw(15) << message << std::setw(15) << message << "\n";

    //BOTH MESSAGES WIDTH (LEFT) (setfill)
    std::cout << std::right;
    std::cout << std::setfill('_');
    std::cout << "\n========================================\n";
    std::cout << std::setw(15) << message << std::setw(15) << std::left << message << "\n";





    return 0;
}
