#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructed (default)" << std::endl;
}
        
Brain::Brain(std::string name) {
    (void)name;
    std::cout << "Brain constructed" << std::endl;
}
        
Brain::Brain(const Brain& other) {
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    std::cout << "Brain copy-constructed" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
        std::cout << "Brain assigned" << std::endl;
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::getIdea(int index) const{
    return ideas[index];
}
        
void Brain::setIdea(int index, const std::string& idea) {
    ideas[index] = idea;
}