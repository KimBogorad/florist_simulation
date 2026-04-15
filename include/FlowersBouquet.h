#include <string>

class FlowersBouquet {
    private:
        std::string bouquet;
        bool is_arranged;

    public:
        // Constructor
        FlowersBouquet();

        //Class Methods
        void arrange();

        // Getters and Setters
        std::string getBouquet() const;
        bool getIsArranged() const;

        void setBouquet(std::string bouquet);
        void setIsArranged(bool is_arranged);
};