#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

//PROTOTYPES
void displayLine(const size_t &size);
void displaySections(const std::vector<std::string> &twoSections, const size_t &size);
void displayContent (std::ifstream &file, const size_t &size, double &av);
void displayFooter (const double &av, const size_t &size);

int main() {
    std::ifstream file;
    file.open("../responses.txt");
    std::vector<std::string> sections{"Student", "Score"};

    const size_t totalW{40};
    const size_t wordW{totalW / 2};

    double average{0.0};

    if (!file) {
        std::cout << "\n[ERROR] COULDN'T OPEN A FILE\n";
        return 1;
    } else {
        displayLine(totalW);
        displaySections(sections, wordW);
        displayLine(totalW);
        displayContent(file, wordW, average);
        displayLine(totalW);
        displayFooter(average, wordW);
    }

    file.close();

    std::cout << "\nProgram Finished\n";

    return 0;
}


void displayLine(const size_t &size) {
    std::cout << std::setw(size) << std::setfill('-') << "" << "\n";
}

void displaySections(const std::vector<std::string> &twoSections, const size_t &size) {
    std::cout << std::setfill(' ') << std::left << std::setw(size) << twoSections.at(0);
    std::cout << std::right << std::setw(size) << twoSections.at(1) << "\n";
}

void displayContent (std::ifstream &file, const size_t &size, double &av) {
    std::cout << std::setfill(' ');

    std::string correctResponses{};
    file >> correctResponses;

    std::string student{};
    std::string responses{};

    int grade{0};
    int sumGrades{0};
    size_t totalStudents{0};

    while (file >> student) {
        std::cout << std::setw(size) << std::left << student;

        file >> responses;

        for (size_t i{0}; i < correctResponses.length(); i++) {
            if (correctResponses.at(i) == responses.at(i))
                grade++;
        }

        std::cout << std::setw(size) << std::right << grade << "\n";

        sumGrades += grade;
        grade = 0;
        totalStudents++;
    }

    av = static_cast<double>(sumGrades) / totalStudents;
}

void displayFooter (const double &av, const size_t &size) {
    std::cout << std::setprecision(1);
    std::cout << std::fixed;

    std::cout << std::setfill(' ') << std::left << std::setw(size) << "Average score";
    std::cout << std::right << std::setw(size) << av << "\n";
}
