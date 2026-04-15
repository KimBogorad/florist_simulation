#include <iostream>

#include "Person.h"

#include "Florist.h"
#include "FlowersBouquet.h"

// Constructor
Person::Person(std::string name) : name(name) {}

// Class Methods
void Person::orderFlowers(Florist* florist, Person* recipient, 
            std::vector<std::string> flowers) {
    florist->acceptOrder(recipient, flowers);
}

void Person::acceptFlowers(FlowersBouquet* bouquet) {
    std::cout << name << " accepts the flowers: " << bouquet->getBouquet() << std::endl;
}

// Getters and Setters
std::string Person::getName() const {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}

        
        
        
        
