#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "=== 正しいポリモーフィズム ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " says: ";
    dog->makeSound();

    std::cout << cat->getType() << " says: ";
    cat->makeSound();

    std::cout << meta->getType() << " says: ";
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n=== 仮想関数なし（WrongAnimal系） ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongMeta->getType() << " says: ";
    wrongMeta->makeSound();

    std::cout << wrongCat->getType() << " says: ";
    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
