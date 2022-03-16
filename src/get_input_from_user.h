//
// Created by sbsir on 16/03/2022.
//
#pragma once
#include <iostream>
#include <limits>

/// Blocks until the user inputs something of type T in the console
template<typename T>
T get_input_from_user()
{
    T input; // NOLINT
    while (!(std::cin >> input)) {
        std::cin.clear();                                                   // The user did not input a valid T so we need
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // to clear cin and try again
        std::cout << "Invalid input, try again!\n";
    }
    return input;
}