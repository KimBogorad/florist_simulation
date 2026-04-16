#include <iostream>

#include "Person.h"

#include "Florist.h"
#include "FlowersBouquet.h"

// Constructor
Person::Person(std::string name) : name(name) {}

// Class Methods
void Person::orderFlowers(Florist* florist, Person* recipient, 
            std::vector<std::string> flowers) {
    std:: string flowers_out = "";
    for (size_t i = 0; i < flowers.size(); ++i) {
        flowers_out += flowers[i] + (i == flowers.size() - 1 ? "" : ", ");
    }
    std::cout << name << " orders flowers to " << recipient->getName() << " from Florist " << florist->getName() << ": "<< flowers_out << "." << std::endl;
    florist->acceptOrder(recipient, flowers);
}

void Person::acceptFlowers(FlowersBouquet* bouquet) {
    std::cout << name << " accepts the flowers: " << bouquet->toString() << std::endl;
    delete bouquet; // the bouquet has lived up its cycle
}

// Log Actions
void Person::logAction(std::string myRole, std::string action, std::string targetRole, std::string targetName) {
    std::cout << myRole << " " << name << " " << action
     << " " << targetRole << " " << targetName << "." << std::endl;
}

// Getters and Setters
std::string Person::getName() const {
    return name;
}

        
        
        
        
