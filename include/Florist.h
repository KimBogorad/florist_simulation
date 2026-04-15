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

        // Getters and Setters
        Wholesaler* getWholesaler() const;
        FlowerArranger* getFlowerArranger() const;
        DeliveryPerson* getDeliveryPerson() const;

        void setWholesaler(Wholesaler* wholesaler);
        void setFlowerArranger(FlowerArranger* flowerArranger);
        void setDeliveryPerson(DeliveryPerson* deliveryPerson);
};