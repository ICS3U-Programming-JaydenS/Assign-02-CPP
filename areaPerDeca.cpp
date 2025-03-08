// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 6, 2025
// Given user input, the area and perimeter of a decagon is calculated.

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // Code first greets user
    std::cout << "Hello! Welcome to Jayden's Decagon calculator!\n";
    // Then declare my variables
    float side,
        area, perimeter;

    std::cout << "Enter side length of the decagon (cm): \n";
    std::cin >> side;

    // This makes it so if a negative number is entered it is an error
    if (side <= 0) {
        std::cout << "Please pick a positive number!\n";
        // If it is not an negative the code continues normally
    } else {
        // Code then calculates Area and Perimeter
        area = (5.0 / 2.0) * pow(side, 2) * sqrt(5 + (2 * (sqrt(5.0))));
        perimeter = (10 * side);
        // Code then displays Area & Perimeter rounded to 2 decimals
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Perimeter is: " << (perimeter) << "cm\n";
        std::cout << "Area is " << (area) << "cm^2";
    }
}

