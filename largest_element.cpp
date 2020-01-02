// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: December 2019
// This program identifies the largest number in a list


#include <iostream>
#include <array>
#include <fstream>


template<size_t N>
int identify(std::array<int, N> arrayOfNumbers) {
    // This function identifies the largest number in a list
    int largestNumber = 0;

    // process
    for (int counter = 0; counter < arrayOfNumbers.size(); counter++) {
        if (largestNumber < arrayOfNumbers[counter]) {
        largestNumber = arrayOfNumbers[counter]; }
    }
    return largestNumber;
}

main() {
    // This function gets a list of 5 numbers from user and prints the largest

    // Variables and array declaration
    std::array<int, 5> numberList;
    int largest;
    int number;
    
    // Process
    for (int counter = 0; counter < 5; counter++) {
        std::cout << "Enter an integer: "; std::cin >> number;
        numberList[counter] = number;
            
        try {
            numberList = std::stoi(number);

        } catch (std::invalid_argument) {
             std::cout << "This is not an integer, try again.";
        }
    }
    // call function
            largest = identify(numberList);

    // output
        std::cout << std::endl;
        std::cout << "The largest number from this list is "
                  << largest << std::endl;
}
