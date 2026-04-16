#include <iostream>

#include "Person.h"
#include "Wholesaler.h"

#include "Grower.h"
#include "FlowersBouquet.h"

// Constructor
Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name), grower(grower) {}

// Class Methods
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
    std::cout << "Wholesaler " << getName() << " forwards the request to Grower " << grower->getName() << "." << std::endl;
    FlowersBouquet* bouquet = grower->prepareOrder(flowers);
    std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << getName() << "." << std::endl;
    return bouquet;
}
