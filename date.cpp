// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program determines if you canm date my granddaughter


#include <iostream>

int main() {
    // variables
    int age;

    // input
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "" << std::endl;

    // process & output
    if (age >= 25 && age <= 40) {
        std::cout << "You may date my granddaughter.";
    } else {
        std::cout << "You cannot date my granddaughter." << std::endl;
    }
}
