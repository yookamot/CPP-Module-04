#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("Cure") {}
        
Cure::Cure(const Cure& other) : AMateria(other) {}
        
Cure& Cure::operator=(const Cure& other) {
    return *this;
}
        
Cure::~Cure() {}
        
AMateria* Cure::clone() const {
    return new Cure(*this);
}
        
void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}