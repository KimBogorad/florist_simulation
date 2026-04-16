#ifndef DELIVERYPERSON_H  //Guard to prevent multiple inclusions of the same header file 
#define DELIVERYPERSON_H  //This happens because of inheritance

#include <iostream>

#include "Person.h"

class DeliveryPerson: public Person {
    public:
        //Constructor
        DeliveryPerson(std::string name);

        // Class Methods
        void deliver(Person* recipient, FlowersBouquet* bouquet);
};
#endif