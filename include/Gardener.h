#ifndef GARDENER_H  //Guard to prevent multiple inclusions of the same header file 
#define GARDENER_H  //This happens because of inheritance

#include <iostream>

#include "Person.h"

class FlowersBouquet;

class Gardener: public Person {
    public:
        // Constructor
        Gardener(std::string name);

        // Class Methods
        FlowersBouquet* prepareBouquet(std::vector<std::string> flowers);
};
#endif