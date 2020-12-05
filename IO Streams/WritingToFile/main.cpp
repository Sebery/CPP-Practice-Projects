#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream fileO{"../copy.txt", std::ios::app};
    std::ifstream fileI{"../git_commands.txt"};

    if (!fileO || !fileI) {
        std::cout << "\n[ERROR] COULDN'T CREATE OR OPEN FILE\n";
        return 1;
    }

    std::string message{};
    std::cout << "Write something to the file: ";
    std::getline(std::cin, message);

    fileO << message;
    std::cout << "You wrote \"" << message << "\" in the file!\n";

    std::string line{};
    while (std::getline(fileI, line)) {
        fileO << line << "\n";
    }

    fileO.close();
    fileI.close();

    return 0;
}
