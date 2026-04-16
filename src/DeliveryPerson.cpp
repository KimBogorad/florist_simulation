#include <iostream>

#include "Person.h"
#include "DeliveryPerson.h"

// Constructor
DeliveryPerson::DeliveryPerson(std::string name) : Person(name) {}

// Class Methods
void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* bouquet) {
    std::cout << "Delivery Person " << getName() << " delivers flowers to " << recipient->getName() << "." << std::endl;
    recipient->acceptFlowers(bouquet);
}

