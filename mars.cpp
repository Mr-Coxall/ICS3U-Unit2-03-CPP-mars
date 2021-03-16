// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mr. Coxall
// Created on: Sep 2020
// This program calculates the time to Mars

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the time to Mars
    int SPEED_OF_LIGHT = 299792458;
    double distance;
    double time;

    //input
    std::cout << "The average distance to mars is 106340000000 m" << std::endl;
    std::cout << "Enter distance to mars (m): ";
    std::cin >> distance;

    // process
    time = distance / SPEED_OF_LIGHT;
    
    // output
    std::cout << "" << std::endl;
    std::cout << "If mars is " << distance << " m away it will take you ";
    std::cout << time << " s to get there." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
