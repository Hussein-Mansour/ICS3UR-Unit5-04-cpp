// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Sat/May29/2021
// This program calculates the volume of a cylinder


#include <iostream>
#include <cmath>


int volumeCylinder(int radiusInt, int heightInt) {
    // this function calculates the volume of rectangular prism using return
    int volume;
    // process
    volume = M_PI * pow(radiusInt, 2) * heightInt;
    // return
    return volume;
}

int main() {
    // this function just calls other functions
    std::string radiusFromUser;
    std::string heightFromUser;
    int radiusInt;
    int heightInt;

    // Entrance
    std::cout << "Starting ..." << std::endl;
    std::cout << "\nThis program calculates the volume of a cylinder."
    << std::endl;
    std::cout << "please enter the radius and height" << std::endl;
    std::cout << "\n" << std::endl;

    // input
    std::cout << "The radius is (mm): ";
    std::cin >> radiusFromUser;
    std::cout << "The height is (mm): ";
    std::cin >> heightFromUser;
    try {
        radiusInt = std::stoi(radiusFromUser);
        heightInt = std::stoi(heightFromUser);
        // call functions
        volumeCylinder(radiusInt, heightInt);
        // output
        std::cout << "\nThe volume of this cylinder with radius "
        << radiusInt << "mm"<< " and height " << heightInt
        << "mm" << " is " << volumeCylinder(radiusInt, heightInt)
        << "㎟" << std::endl;
        std::cout << "\nDone." << std::endl;
    }catch (std::invalid_argument) {
       std::cout << "\nInvalid Input!" << std::endl;
       std::cout << "\nDone." << std::endl;
    }
}
