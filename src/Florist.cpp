#include <iostream>

#include "Person.h"
#include "Florist.h"

#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "FlowersBouquet.h"

// Constructor
Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger,
             DeliveryPerson* deliveryPerson) : Person(name), wholesaler(wholesaler), 
             flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {}

// Class Methods
void Florist::acceptOrder(Person* recipient, std::vector<std::string> flowers) {
    std::cout << "Florist " << getName() << " forwards request to Wholesaler " << wholesaler->getName() << "." << std::endl;
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers);
    std::cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << getName() << "."<< std::endl;
    std::cout << "Florist " << getName() << " request flowers arrangement from Flower Arranger " << flowerArranger->getName() << "."<< std::endl;
    flowerArranger->arrangeFlowers(bouquet);
    std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << getName() << "." << std::endl;
    std::cout << "Florist " << getName() << " forwards flowers to Delivery Person " << deliveryPerson->getName() << "." << std::endl;
    deliveryPerson->deliver(recipient, bouquet);
}

// Getters and Setters
Wholesaler* Florist::getWholesaler() const {
    return wholesaler;
}
FlowerArranger* Florist::getFlowerArranger() const {
    return flowerArranger;
}
DeliveryPerson* Florist::getDeliveryPerson() const {
    return deliveryPerson;
}

void Florist::setWholesaler(Wholesaler* wholesaler) {
    this->wholesaler = wholesaler;
}
void Florist::setFlowerArranger(FlowerArranger* flowerArranger) {
    this->flowerArranger = flowerArranger;
}
void Florist::setDeliveryPerson(DeliveryPerson* deliveryPerson) {
    this->deliveryPerson = deliveryPerson;
}