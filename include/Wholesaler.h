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

        //Getters and Setters
        Grower* getGrower() const;

        void setGrower(Grower* grower);
};