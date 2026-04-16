#include <iostream>
#include <vector>

#include "FlowersBouquet.h"

// Constructor
FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet, bool is_arranged) : 
                                    bouquet(bouquet), is_arranged(is_arranged) {}

// Class Methods
void FlowersBouquet::arrange() {
    is_arranged = true;
}

// toString method
std::string FlowersBouquet::toString() const {
    std::string result = "";
    for (size_t i = 0; i < bouquet.size(); ++i) {
        result += bouquet[i] + (i == bouquet.size() - 1 ? "" : ", ");
    }
    return result+ ".";
}




