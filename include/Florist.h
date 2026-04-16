#ifndef FLORIST_H  //Guard to prevent multiple inclusions of the same header file 
#define FLORIST_H  //This happens because of inheritance

#include <iostream>

#include "Person.h"

class Wholesaler;
class FlowerArranger;
class DeliveryPerson;

class Florist : public Person {
    private:
        Wholesaler* wholesaler;
        FlowerArranger* flowerArranger;
        DeliveryPerson* deliveryPerson;
    
        public:

        // Constructor
        Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger,
             DeliveryPerson* deliveryPerson);

        // Class Methods
        void acceptOrder(Person* recipient, std::vector<std::string> flowers);
};
#endif