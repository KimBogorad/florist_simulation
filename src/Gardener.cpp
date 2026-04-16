#include <iostream>

#include "Person.h"
#include "Gardener.h"

#include "FlowersBouquet.h"

// Constructor
Gardener::Gardener(std::string name) : Person(name) {}

// Class Methods
FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
    std::cout << "Gardener " << getName() << " prepares flowers." << std::endl;
    return new FlowersBouquet(flowers, false);
}
