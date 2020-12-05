#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    std::ifstream file;
    file.open("../test.txt");
    std::string team;
    std::string type;
    size_t points;

    if (!file) {
        std::cout << "\n[ERROR] COULDN'T OPEN THE FILE\n";
        return 1;
    } else {
        std::cout << std::setfill('.') << std::setw(60) << std::left << "" << "\n";
        std::cout << std::setfill(' ');

        while (file >> team >> points >> type) {
            std::cout << std::setw(20) << std::left << team;
            std::cout << std::setw(20) << std::right << points;
            std::cout << std::setw(4) << std::right << type << "\n";
        }
    }

    file.close();


    return 0;
}
