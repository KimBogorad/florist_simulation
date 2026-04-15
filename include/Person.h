#include <iostream>
#include <vector>

class Florist;
class FlowersBouquet;

class Person {
    private: 
        std::string name;
    
    public:
        // Constructor
        Person(std::string name);

        // Class Methods
        void orderFlowers(Florist* florist, Person* recipient, 
            std::vector<std::string> flowers);

        void acceptFlowers(FlowersBouquet* bouquet);
        
        // Getters and Setters
        std::string getName() const;

        void setName(std::string name);
};