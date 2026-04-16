#ifndef FLOWERSBOUQUET_H  //Guard to prevent multiple inclusions of the same header file 
#define FLOWERSBOUQUET_H  //This happens because of inheritance

#include <iostream>

class FlowersBouquet {
    private:
        std::vector<std::string> bouquet;
        bool is_arranged;

    public:
        // Constructor
        FlowersBouquet(std::vector<std::string> flowers, bool is_arranged);

        //Class Methods
        void arrange();

        // toString method
        std::string toString() const;
};
#endif