#include "Person.h"

class FlowersBouquet;

class Gardener: public Person {
    public:
        // Constructor
        Gardener(std::string name);

        // Class Methods
        FlowersBouquet* prepareBouquet(std::vector<std::string> flowers);
};