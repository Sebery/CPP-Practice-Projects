#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

void deleteStartWhiteSpaces (std::string &line);
bool checkAllWhiteSpaces (const std::string &line);


int main() {
    std::ofstream fileO{"../copy.txt"};
    std::ifstream fileI{"../romeoandjuliet"};

    if (!fileO || !fileI) {
        std::cout << "\n[ERROR] CANNOT CREATE OR OPEN A FILE\n";
        return 1;
    }

    std::string line{};
    long count{0};

    while (std::getline(fileI, line)) {
        if (!checkAllWhiteSpaces(line)) {
            count++;
            deleteStartWhiteSpaces(line);
            fileO << std::setw(12) << std::left << count << line << "\n";
        }
    }

    std::cout << "\nCopied and Formatted!\n";


    fileO.close();
    fileI.close();

    return 0;
}

bool checkAllWhiteSpaces (const std::string &line) {

    for (const auto &c : line) {
        if (c != ' ')
            return false;
    }

    return true;

}

void deleteStartWhiteSpaces (std::string &line) {
    for (int i{0}; i < line.size(); i++) {
        if (line.at(i) == ' ' || line.at(i) == '\t') {
            line.erase(0, 1);
            i = -1;
        } else {
            break;
        }
    }



}
