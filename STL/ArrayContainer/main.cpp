#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>

int main() {
    std::array<double, 6> grades{71.2, 69.1, 55.6, 80.0, 88.3, 72.1};
    double sum{};

    std::cout << "\nFirst grade: " << grades.front() << "\n";
    std::cout << "Last grade: " << grades.back() << "\n\n";

    std::for_each(grades.begin(), grades.end(), [] (double grade) {
        std::cout << grade << "\n";
    });

    sum = std::accumulate(grades.begin(), grades.end(), 0);

    std::cout << "\nThe average is: " << (sum / 6) << "\n";

    int pass = std::count_if(grades.begin(), grades.end(), [] (double grade) {
        return grade >= 70.0;
    });

    std::cout << "\nPassed: " << pass << "\n";

    grades.fill(70.0);

    std::for_each(grades.begin(), grades.end(), [] (double grade) {
        std::cout << grade << "\n";
    });

    double *data = grades.data();

    std::cout << "\nData: " << *data << "\n";

    *data = 700.0;

    std::for_each(grades.begin(), grades.end(), [] (double grade) {
        std::cout << grade << "\n";
    });

    return 0;
}
