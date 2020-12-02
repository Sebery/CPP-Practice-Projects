#include <iostream>
#include <string>


double getFinalGrade (int sum, int total);


int main() {
    std::cout.precision(2);
    std::cout << std::fixed;

    double grade{};
    char sum{};
    char total{};

    std::cout << "\nPlease enter the sum of your grades: ";
    std::cin >> sum;

    //GET SUM OF GRADES
    try {
        if (!isdigit(sum))
            throw std::string{"\nERROR: Please enter again the sum of your grades: "};
    }
    catch (std::string &ex) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << ex;
        std::cin >> sum;
    }

    std::cout << "\nPlease enter the total subjects: ";
    std::cin >> total;

    std::cout << "\ntotal: " << total << "\n";

    //GET TOTAL SUBJECTS
    try {
        if (!isdigit(total))
            throw std::string{"\nERROR: Please enter again the total subjects: "};
    }
    catch (std::string &ex) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << ex;
        std::cin >> total;
    }

    //GET FINAL GRADE
    try {
        grade = getFinalGrade(static_cast<int>(sum), static_cast<int>(total));
        std::cout << "\nYour final grade is: " << grade << "\n";
    }
    catch (std::string &ex) {
        std::cout << ex;
    }

    std::cout << "\nProgram Finished!\n";


    return 0;
}

double getFinalGrade (int sum, int total) {
    if (total == 0)
        throw std::string{"\nERROR! Cannot divide by zero!\n"};
    else if (sum < 0 || total < 0)
        throw std::string{"\nERROR! Cannot use negative numbers!\n"};

    return static_cast<double>(sum) / total;
}
