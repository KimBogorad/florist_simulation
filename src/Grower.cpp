#include <iostream>

#include "Person.h"
#include "Grower.h"

#include "Gardener.h"
#include "FlowersBouquet.h"

// Constructor
Grower::Grower(std::string name, Gardener* gardener) : Person(name), gardener(gardener) {}

// Class Methods
FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers) {
    std::cout << "Grower " << getName() << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
    FlowersBouquet* bouquet = gardener->prepareBouquet(flowers);
    std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << getName() << "." << std::endl;
    return bouquet;
}