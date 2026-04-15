#include "Person.h"

class FlowerArranger: public Person {
    public:
        //Constructor
        FlowerArranger(std::string name);

        // Class Methods
        void arrangeFlowers(FlowersBouquet* bouquet);
};