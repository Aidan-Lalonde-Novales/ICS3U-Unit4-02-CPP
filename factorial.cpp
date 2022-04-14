// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-13
// This program tells a user the factorial of the number they enter.

#include <iostream>
#include <string>

int main() {
    // this function calculates a factorial
    std::string timesToLoopString;
    int counter = 1;
    int sumCount = 1;
    int timesToLoop;

    // input
    std::cout << "Please enter a positive integer: ";
    std::cin >> timesToLoopString;

    // process & output
    try {
        timesToLoop = std::stoi(timesToLoopString);

        if (timesToLoop >= 0) {
            do {
                sumCount = sumCount * counter;
                counter = counter + 1;
            } while (counter <= timesToLoop);

            std::cout << "The factorial of " <<
            timesToLoop << " is " << sumCount << "." << std::endl;

        } else {
            std::cout << "Please input a positive integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Your integer is invalid! Please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
