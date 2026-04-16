#include <iostream>

#include "Person.h"
#include "FlowerArranger.h"
#include "FlowersBouquet.h"

// Constructor
FlowerArranger::FlowerArranger(std::string name) : Person(name) {}

// Class Methods
void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) {
    std::cout << "Flower Arranger " << getName() << " arranges flowers." << std::endl;
    bouquet->arrange();
}
