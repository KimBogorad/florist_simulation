#include <iostream>

#include "Person.h"
#include "Wholesaler.h"

#include "Grower.h"
#include "FlowersBouquet.h"

// Constructor
Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name), grower(grower) {}

// Class Methods
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
    std::cout << "Wholesaler " << getName() << " forwards request to Grower " << grower->getName() << "." << std::endl;
    return grower->prepareOrder(flowers);
}

// Getters and Setters
Grower* Wholesaler::getGrower() const {
    return grower;
}

void Wholesaler::setGrower(Grower* grower) {
    this->grower = grower;
}
