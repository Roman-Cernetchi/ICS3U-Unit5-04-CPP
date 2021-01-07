// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program calculates the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

double calculateVolume(float radius, float height) {
    // calculates the volume of a cylinder
    double cylinderVolume;
    std::cout.precision(4);

    // process
    cylinderVolume = M_PI * pow(radius, 2) * height;

    return cylinderVolume;
}

int main() {
    // input the radius and height
    double volume;
    float radiusFromUser;
    float heightFromUser;
    std::string radiusString;
    std::string heightString;
    std::cout.precision(4);

    while (true) {
        try {
            // input
            std::cout << "Enter the radius of a cylinder (cm): ";
            std::cin >> radiusString;
            std::cout << "Enter the height of a cylinder (cm): ";
            std::cin >> heightString;
            std::cout << std::endl;

            radiusFromUser = std::stoi(radiusString);
            heightFromUser = std::stoi(heightString);

            if (radiusFromUser <= 0 || heightFromUser <= 0) {
                std::cout << "Invalid input" << std::endl;
            }

            break;
        } catch (std::invalid_argument) {
            std::cout << "This was not a number"<< std::endl;
        }
    }

    // call functions
    volume = calculateVolume(radiusFromUser, heightFromUser);

    // output
    std::cout << "The volume is " << std::setprecision(2)
    << std::fixed << volume << " cm³" << std::endl;
}
