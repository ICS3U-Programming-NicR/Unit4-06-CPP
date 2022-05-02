// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program makes a random number game

#include <stdlib.h>
#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
    for (int counter = 200; counter <= 255; counter ++) {
        for (int counter2 = 200; counter2 <= 255; counter2++) {
            for (int counter3 = 200; counter3 <= 255; counter3++) {
                cout << "rgb code = " << counter << ", " << \
                counter2 << ", " << counter3 << "\n";
            }
        }
    }
}
