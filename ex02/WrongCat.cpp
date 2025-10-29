#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructed (default)" << std::endl;
}

WrongCat::WrongCat(std::string name) {
    (void)name;
    type = "WrongCat";
    std::cout << "WrongCat constructed" << std::endl;
}
        
WrongCat::WrongCat(const WrongCat& other) {
    type = other.type;
    std::cout << "WrongCat copy-constructed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        type = other.type;
        std::cout << "WrongCat assigned" << std::endl;
    }
    return *this;
}
        
WrongCat::~WrongCat() {
    std::cout << "WrongCat destroyed" << std::endl;
}
        
void WrongCat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}