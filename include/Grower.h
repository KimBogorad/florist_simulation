#ifndef GROWER_H  //Guard to prevent multiple inclusions of the same header file 
#define GROWER_H  //This happens because of inheritance

#include <iostream>

#include "Person.h"

class Gardener;

class Grower: public Person {
    private:
        Gardener* gardener;
    
    public:
        //Constructor
        Grower(std::string name, Gardener* gardener);

        // Class Methods
        FlowersBouquet* prepareOrder(std::vector<std::string> flowers);

        // Getters and Setters
        Gardener* getGardener() const;

        void setGardener(Gardener* gardener);
};
#endif