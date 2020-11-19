#include <iostream>

using std::cout, std::cin;

/*
 * ------------------------------------
 * --Sebery's Carpet Cleaning Service--
 * ------------------------------------
 *
 * Charges:
 * $25 per small room
 * $35 per large room
 * Sales tax rate: 6%
 * Estimates are valid for 30 days
 *
 * Prompt the user for the number of small and large rooms they would like cleaned
 * and provide an estimate such as:
 *
 * Estimate for carpet cleaning service
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * -------------------------------------
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 *
 * */

int main() {

    cout << "-----------------------------------------------\n";
    cout << "--WELCOME TO SEBERY'S CARPET CLEANING SERVICE--\n";
    cout << "-----------------------------------------------\n";

    cout << "How many small rooms would you like cleaned: ";
    int small_rooms{};
    cin >> small_rooms;

    cout << "How many large rooms would you like cleaned: ";
    int large_rooms{};
    cin >> large_rooms;

    const double small_room_cost{25.0};
    const double large_room_cost{35.0};
    const double tax_rate{0.06};
    const int valid_days{30};

    double total_rooms_cost{(small_rooms * small_room_cost) + (large_rooms * large_room_cost)};
    double total_tax{total_rooms_cost * tax_rate};
    double total_cost{total_rooms_cost + total_tax};

    cout << "-----------------------------------------------\n";
    cout << "Estimate for Sebery's Carpet Cleaning Service\n";
    cout << "Number of small rooms: " << small_rooms << "\n";
    cout << "Number of large rooms: " << large_rooms << "\n";
    cout << "Price per small room: " << "$" << small_room_cost << "\n";
    cout << "Price per large room: " << "$" << large_room_cost << "\n";
    cout << "Cost: " << "$" << total_rooms_cost << "\n";
    cout << "Tax: " << "$" << total_tax << "\n";
    cout << "-----------------------------------------------\n";
    cout << "Total estimate: " << "$" << total_cost << "\n";
    cout << "This estimate is valid for " << valid_days << " days.\n";



    return 0;
}
