#ifndef WHOLESALER_H  //Guard to prevent multiple inclusions of the same header file 
#define WHOLESALER_H  //This happens because of inheritance

#include <iostream>
#include <vector>

#include "Person.h"

class Grower;
class FlowersBouquet;

class Wholesaler: public Person {
    private: 
        Grower* grower;
    
    public:
        
        //Constructor:
        Wholesaler(std::string name, Grower* grower);

        // Class Methods
        FlowersBouquet* acceptOrder(std::vector<std::string> flowers);
};
#endif