#include <iostream>
#include <vector>

using std::cin, std::cout, std::vector;

/*
 * Write a c++ program as follows:
 *
 * Declare 2 empty vectors of integers named
 * vector1 and vector2, respectively.
 *
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector1 using the at() method as well as its size using the size() method.
 *
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method.
 *
 * Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 *
 * Add vector1 to vector_2d dynamically using push_back
 * Add vector2 to vector_2d dynamically using push_back
 *
 * Display the elements in vector_2d using the at() method
 *
 * Change vector1.at(0) to 1000
 *
 * Display the elements in vector_2d again using the at() method
 *
 * Display the elements in vector1
 *
 * */

int main() {
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "The size of vector 1 is: " << vector1.size() << "\n";
    cout << "Elements in vector 1:\n";
    cout << "[" << vector1.at(0) << ", " << vector1.at(1) << "]\n";

    cout << "\n";

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "The size of vector 2 is: " << vector2.size() << "\n";
    cout << "Elements in vector 2:\n";
    cout << "[" << vector2.at(0) << ", " << vector2.at(1) << "]\n";

    cout << "\n";
    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "The size of vector 2D is: " << vector_2d.size() << "\n";
    cout << "Elements in vector 2D:\n";
    cout << "[" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1);
    cout << ", " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "]\n";

    cout << "\n";
    vector1.at(0) = 1000;

    cout << "The size of vector 2D is: " << vector_2d.size() << "\n";
    cout << "Elements in vector 2D:\n";
    cout << "[" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1);
    cout << ", " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "]\n";

    cout << "\n";

    cout << "The size of vector 1 is: " << vector1.size() << "\n";
    cout << "Elements in vector 1:\n";
    cout << "[" << vector1.at(0) << ", " << vector1.at(1) << "]\n";


    return 0;
}
