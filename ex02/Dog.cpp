#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructed (default)" << std::endl;
}

Dog::Dog(std::string name) {
    (void)name;
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructed" << std::endl;
}
        
Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Dog copy-constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
        std::cout << "Dog assigned" << std::endl;
    }
    return *this;
}
        
Dog::~Dog() {
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}
        
void Dog::makeSound() const{
    std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() const{
    return brain;
}