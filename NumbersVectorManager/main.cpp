#include <iostream>
#include <vector>

using std::cout, std::cin, std::vector;

/*
 * This challenge is about using a collection (list) of integers and allowing the user
 * to select options from a menu to preform operations on the list.
 *
 * Your program should display a menu options to the user as follows:
 *
 * P - Print numbers
 * A - Add a number
 * M - Display average of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 *
 * Enter your choice:
 *
 * The program should only accept valid choices from the user, both upper and lowercase selections
 * should be allowed. If an illegal choice is made, you should display, "Unknown selection, please
 * try again" and the menu options should be displayed again.
 *
 * If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty"
 * If the list is not empty then all the list element should be displayed inside square brackets
 * separated by a space.
 * For example: [ 1 2 3 4 5 ]
 *
 * If the user enters 'A' or 'a' then you should display prompt the user for an integer to add to
 * the list which you will add to the list and then display it was added. For example, if the user
 * enters 5 you should display: "5 Added".
 * Duplicate list entries are OK
 *
 * If the user enters 'M' or 'm' you should calculate the average of the elements in the list and
 * display it. If the list is empty you should display, "Unable to calculate the average - no data"
 *
 * If the user enters 'S' or 's' you should display the smallest element in the list.
 * For example: If the list contains [ 2 4 5 1 ], you should display "The smallest number is 1"
 * If the list is empty you should display "Unable to determine the smallest number - list is empty"
 *
 * If the user enters 'L' or 'l' you should display the largest element in the list.
 * For example: If the list contains [ 2 4 5 1 ], you should display "The largest number is 5"
 * If the list is empty you should display "Unable to determine the smallest number - list is empty"
 *
 * If the user enters 'Q' or 'q' you should display "Goodbye" and the program should terminate.
 *
 *
 * */

int main() {
    vector<int> numbers{};
    char selection{};

    cout << "---------------------------------------\n";
    cout << "-- WELCOME TO NUMBERS VECTOR PROGRAM --\n";
    cout << "---------------------------------------\n";

    cout << "\n";

    do {
        cout << "***********************\n";
        cout << "** ENTER YOUR CHOICE **\n";
        cout << "***********************\n";
        cout << "P - Print Numbers\n";
        cout << "A - Add a Number\n";
        cout << "M - Display Average of the Numbers\n";
        cout << "S - Display the Smallest Number\n";
        cout << "L - Display the Largest Number\n";
        cout << "Q - Quit\n";
        cout << "---> ";
        cin >> selection;
        selection = static_cast<char>(std::tolower(selection));

        switch (selection) {
            case 'p':
                if (numbers.size() > 0) {
                    cout << "\n[ ";

                    for (auto num : numbers) {
                        cout << num << " ";
                    }

                    cout << "]\n";
                } else {
                    cout << "\n[] - The List is Empty\n";
                }
                break;
            case 'a':
                {
                    int num{};
                    cout << "\nPlease, Enter a Number to Add to the List: ";
                    cin >> num;
                    numbers.push_back(num);
                    cout << num << " was Added to the List!\n";
                }
                break;
            case 'm':
                {
                    double average{0.0};
                    int sum{0};

                    if (numbers.size() > 0) {
                        for (auto num : numbers) {
                            sum += num;
                        }

                        average = static_cast<double>(sum) / numbers.size();
                        cout << "\nThe Average is: " << average << "\n";
                    } else {
                        cout << "\nUnable to Calculate the Average - No Data\n";
                    }
                }
                break;
            case 's':
                {
                    int smallest_number{};

                    if (numbers.size() > 0) {
                        smallest_number = numbers.at(0);
                        for (auto num : numbers) {
                            if (num < smallest_number) {
                                smallest_number = num;
                            }
                        }

                        cout << "\nThe Smallest Number in the List is: " << smallest_number << "\n";
                    } else {
                        cout << "\nUnable to Determine the Smallest Number - List is Empty\n";
                    }
                }
                break;
            case 'l':
                {
                    int largest_number{};

                    if (numbers.size() > 0) {
                        largest_number = numbers.at(0);

                        for (auto num : numbers) {
                            if (num > largest_number) {
                                largest_number = num;
                            }
                        }

                        cout << "\nThe Largest Number in the List is: " << largest_number << "\n";
                    } else {
                        cout << "\nUnable to Determine the Largest Number - List is Empty\n";
                    }
                }
                break;
            case 'q':
                cout << "\nGoodbye!\n";
                break;
            default:
                cout << "\nUnknown Selection, Please Try Again!\n";
        }

        cout << "\n";
    } while (selection != 'q');

    return 0;
}
