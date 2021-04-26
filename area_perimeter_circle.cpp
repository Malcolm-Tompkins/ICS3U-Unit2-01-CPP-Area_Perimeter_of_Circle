// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on April 26, 2021
// Finding area and perimeter of a circle with a 15mm radius
#include <iostream>
#include <cmath>

int main() {
    std::cout << "Dimensions of circle:\n";
    std::cout << "Radius = 15mm\n";
    std::cout << "Area is: " << 15 * 15 * M_PI << "mm^2";
    std::cout << "\nPerimeter is: " << 2 * M_PI * 15 << "mm";
}
