// copyright (c) 2026 all rights reserved
// Created by : Adrian student
// Created on : 4th NOV 2026
// This program asks the user to enter a positive number, then it
// Sums all the numbers from 0 to that chosen number.
#include <iostream>
#include <string>


int main() {
    // declare variables
    std::string userNumberStr;

    // get user number
    std::cout << "Enter your number : ";
    std::cin >> userNumberStr;
    std::cout << "\n";

    // initialise count and final
    int count = 0;
    int total = 0;

    try {
        float userNumberFloat = std::stof(userNumberStr);
        if (userNumberFloat == static_cast<int>(userNumberFloat)) {
            if (userNumberFloat >= 0) {
                while (count <= userNumberFloat) {
                    total = count + total;
                    count = count + 1;
                    std::cout << "Tracking " << count
<< " times through the loop" << std::endl;
                    }
                std::cout << "The sum of all numbers from 0 to "
<< userNumberFloat << " = " << total << std::endl;
                std::cout << "\n";
            } else {
                std::cout << userNumberFloat << " is not a positive integer";
                std::cout << "\n";
            }
        } else {
            std::cout << userNumberFloat <<" is not an integer" << std::endl;
        }
    } catch(std::invalid_argument) {
        std::cout << userNumberStr << " is not an integer";
        std::cout << "\n";
    }
    std::cout << "Thanks for playing";
    std::cout << "\n";
}
