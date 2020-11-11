#include <iostream>
#include <string>

using std::string, std::cout, std::cin;

/*
 * A simple and very old method of sending secret messages is the substitution cipher.
 * You might have used this cipher with your friends when you were kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example: every 'a' get replaced with an 'X', and every 'b' gets replaced with
 * a 'Z', etc.
 *
 * Write a program that asks the user to enter a secret message.
 *
 * Encrypt this message using the substitution cipher and display the encrypted message.
 * Then decrypted the encrypted message back to the original message.
 *
 * You may use the 2 strings below for your substitution.
 * For example: to encrypt you can replace the character at position n in alphabet with
 * the character at position n in key.
 *
 * To decrypt you can replace the character at position n in key
 * with the character at position n in alphabet.
 *
 *
 * */


int main() {

    const string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVwXYZ -"};
    const string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr-_"};

    string encryptedMessage{};
    string decryptedMessage{};

    cout << "----------------------------------------\n";
    cout << "-- WELCOME TO THE SUBSTITUTION CIPHER --\n";
    cout << "----------------------------------------\n";

    cout << "\n";

    string secretMessage{};
    cout << "Please, enter your secret message: ";
    getline(cin, secretMessage);

    for (auto c : secretMessage) {
        int index = alphabet.find(c);
        if (index != string::npos) {
            encryptedMessage.push_back(key.at(index));
        } else {
            encryptedMessage.push_back('&');
        }
    }

    cout << "\nYour encrypted message is: " << encryptedMessage << "\n";

    cout << "\n";

    for (auto c : encryptedMessage) {
        int index = key.find(c);
        (index != string::npos) ? decryptedMessage.push_back(alphabet.at(index)) : decryptedMessage.push_back('&');
    }

    cout << "\nYour decrypted message is: " << decryptedMessage << "\n";


    return 0;
}
