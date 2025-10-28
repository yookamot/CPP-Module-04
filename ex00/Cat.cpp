#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructed (default)" << std::endl;
}

Cat::Cat(std::string name) {
    (void)name;
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}
        
Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy-constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        type = other.type;
        std::cout << "Cat assigned" << std::endl;
    }
    return *this;
}
        
Cat::~Cat() {
    std::cout << "Cat destroyed" << std::endl;
}
        
void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}