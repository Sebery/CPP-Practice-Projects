#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream file{};
    file.open("../romeoandjuliet.txt");

    long totalWords{0};
    long found{0};
    std::string line{};

    if (!file) {
        std::cout << "\n[ERROR] COULDN'T OPEN THE FILE\n";
        return 1;
    }

    std::string word{};
    std::cout << "Enter the substring to search for: ";
    std::cin >> word;

    while (file >> line) {
        totalWords++;
        if (line.find(word) != std::string::npos) {
            found++;
        }
    }

    std::cout << totalWords << " were searched...\n";
    std::cout << "The substring " << word << " was found " << found << " times\n";

    file.close();

    return 0;
}
