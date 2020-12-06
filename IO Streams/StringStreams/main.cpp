#include <iostream>
#include <limits>
#include <string>
#include <sstream>

int main() {

    std::cout << "\n============================================\n";

    std::string line{};
    std::ostringstream stringO{};

    std::cout << "\nEnter a message: ";
    std::getline(std::cin, line);

    stringO << line;

    std::cout << stringO.str() << "\n";

    std::cout << "\n============================================\n";

    std::istringstream stringI{"Sebastian 100"};
    std::string name{};
    int grade{0};

    stringI >> name >> grade;

    std::cout << "\nThe student " << name << " has a grade: " << grade << "\n";

    std::cout << "\n============================================\n";

    bool isNumber{false};
    int value{0};

    do {
        std::stringstream stream{};
        std::string data{};

        std::cout << "\nPlease enter a number: ";
        std::cin >> data;
        stream << data;

        if (stream >> value)
            isNumber = true;
        else
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while(!isNumber);

    std::cout << "\nYou entered the number " << value << "\n";




    return 0;
}
