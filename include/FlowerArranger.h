#ifndef FLOWERARRANGER_H  //Guard to prevent multiple inclusions of the same header file 
#define FLOWERARRANGER_H  //This happens because of inheritance

#include <iostream>

#include "Person.h"

class FlowerArranger: public Person {
    public:
        //Constructor
        FlowerArranger(std::string name);

        // Class Methods
        void arrangeFlowers(FlowersBouquet* bouquet);
};
#endif