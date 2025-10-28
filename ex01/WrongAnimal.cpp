#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructed (default)" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name) {
    std::cout << "WrongAnimal constructed" << std::endl;
}
        
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal copy-constructed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
        std::cout << "WrongAnimal assigned" << std::endl;
    }
    return *this;
}
        
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType() const{
    return type;
}
        
void WrongAnimal::makeSound() const{
    std::cout << "Some generic animal sound" << std::endl;
}