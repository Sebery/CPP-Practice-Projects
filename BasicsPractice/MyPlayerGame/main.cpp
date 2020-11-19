#include <iostream>
#include <string>
#include "Player.h"

using std::cout, std::cin;

//Prototypes
void welcomeMessage ();
char selectionMenu ();
void getSelection (char &selection, Player *const player);

int main() {
    Player *player{nullptr};
    char selection{};


    welcomeMessage();

    player = player->createPlayer();
    player->displayPlayerInfo();

    do {
        selection = selectionMenu();
        getSelection(selection, player);
    } while (selection != 'Q');

    delete player;

    return 0;
}

//Functions
void welcomeMessage () {
    cout << "\n-------------------------\n";
    cout << "-- WELCOME TO THE GAME --\n";
    cout << "-------------------------\n\n";
}

char selectionMenu () {
    char selection{};
    cout << "\n-----------------------------\n";
    cout << "-- WHAT DO YOU WANT TO DO? --\n";
    cout << "-----------------------------\n";
    cout << "Attack a random enemy   ---> ENTER A\n";
    cout << "View your Player info   ---> ENTER V\n";
    cout << "Change your name        ---> ENTER C\n";
    cout << "Quit the game           ---> ENTER Q\n";
    cout << "---> ";
    cin >> selection;
    return selection;
}

void getSelection (char &selection, Player *const player) {
    selection = toupper(selection);

    switch (selection) {
        case 'A':
            cout << "\nEnemy Attacked!\n";
            break;
        case 'V':
            player->displayPlayerInfo();
            break;
        case 'C':
            {
                std::string newName{};
                cout << "\nCurrent name: " << player->getName() << "\n";
                cout << "\nEnter the new name: ";
                cin >> newName;
                player->setName(newName);
            }
            break;
        case 'Q':
            cout << "\nQuit the game!\n";
            break;
        default:
            cout << "\nInvalid option, please try again!\n";
            break;
    }
}
