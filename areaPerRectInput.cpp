// Created by: Shem
// Created on: 9/21/2025
// This program calculates and displays the area and perimeter of a rectangle
// with user input
// Copyright 2025 Shem
#include <iostream>
int main() {
    int length;
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
int width;
    std::cout<< "Enter width of the rectangle (mm): ";
    std::cin >> width;

    int area = length * width;
    int perimeter = 2 * (length + width);

    std::cout << "\nInput:\n";
    std::cout << "Length = " << length << " mm\n";
    std::cout << "Width  = " << width << " mm\n\n";

    std::cout << "Area = " << area << " mm^2\n";
    std::cout << "Perimeter = " << perimeter << " mm\n";
}
