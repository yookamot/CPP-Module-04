#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructed (default)" << std::endl;
}

Animal::Animal(std::string name) : type(name) {
    std::cout << "Animal constructed" << std::endl;
}
        
Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy-constructed" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
        std::cout << "Animal assigned" << std::endl;
    }
    return *this;
}
        
Animal::~Animal() {
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const{
    return type;
}
        
void Animal::makeSound() const{
    std::cout << "Some generic animal sound" << std::endl;
}