#include <string>
#include <iostream>
#include "bit.hpp"

int main() {
    long num;
    std::cout << "Enter the integer positive number (less than 4.294.967.296): ";
    std::cin >> num;
    std::cout << "The result: " << bit(num) << std::endl;

    return 0;
}