#include <string>
#include <bitset>
#include <iostream>

std::string bit( long num) {
    if ( num < 0 || num > 4294967295 )  
        return "The number doesn`t satisfy the conditions.";
    std::bitset<32> bits(num);
    return bits.to_string();
}