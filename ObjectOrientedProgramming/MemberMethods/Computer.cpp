//
// Created by Sebastian on 16/11/2020.
//

#include "Computer.h"
#include <iostream>

//Methods
void Computer::validateType(const std::string &role) {
    std::string message{};

    if (role == "student" || role == "professor" || role == "programmer")
        message = (processor == "intel") ? "You have the right processor!" : "Please, change your processor";
    else if (role == "gamer" || role == "youtuber" || role == "game developer")
        message = (processor == "amd") ? "You have the right processor!" : "please, change your processor!";
    else
        message = "Unknown role, please try again!";

    std::cout << "\n" << message << "\n";
}

void Computer::validateRam(const std::string &program) {
    std::string message{};

    if (program == "photoshop")
        message = (ram >= 8) ? "Perfect, enough RAM!" : "Sorry, you need more RAM!";
    else if (program == "unreal engine")
        message = (ram >= 16) ? "Perfect, enough RAM!" : "Sorry, you need more RAM!";
    else if (program == "blender")
        message = (ram <= 8) ? "Perfect, enough RAM!" : "Sorry, you need more RAM!";
    else
        message = "Unknown program, but i think it's OK!";

    std::cout << "\n" << message << "\n";
}
