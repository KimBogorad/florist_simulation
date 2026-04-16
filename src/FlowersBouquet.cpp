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

// Getters and Setters
std::vector<std::string> FlowersBouquet::getBouquet() const {
    return bouquet;
}
bool FlowersBouquet::getIsArranged() const {
    return is_arranged;
}

void FlowersBouquet::setBouquet(std::string bouquet) {
    while (this->bouquet.size() > 0) {
        this->bouquet.pop_back();
    }
    this->bouquet.push_back(bouquet);
}
void FlowersBouquet::setIsArranged(bool is_arranged) {
    this->is_arranged = is_arranged;
}

// toString method
std::string FlowersBouquet::toString() const {
    std::string result = "";
    for (size_t i = 0; i < bouquet.size(); ++i) {
        result += bouquet[i] + (i == bouquet.size() - 1 ? "" : ", ");
    }
    return result+ ".";
}




