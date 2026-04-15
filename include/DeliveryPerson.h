#include "Person.h"

class DeliveryPerson: public Person {
    public:
        //Constructor
        DeliveryPerson(std::string name);

        // Class Methods
        void deliver(Person* recipient, FlowersBouquet* bouquet);
};