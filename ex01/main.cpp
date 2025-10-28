#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const int SIZE = 4;
    Animal* animals[SIZE];

    std::cout << "=== Create Animals ===" << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (i < SIZE / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n=== Fill Brain Ideas ===" << std::endl;
    Dog* dog0 = dynamic_cast<Dog*>(animals[0]);
    if (dog0)
    {
        dog0->getBrain()->setIdea(0, "Chase the mailman");
        dog0->getBrain()->setIdea(1, "Eat food");
    }

    Cat* cat2 = dynamic_cast<Cat*>(animals[2]);
    if (cat2)
    {
        cat2->getBrain()->setIdea(0, "Sleep on keyboard");
        cat2->getBrain()->setIdea(1, "Knock things down");
    }

    std::cout << "\n=== Test deep copy ===" << std::endl;
    Dog* dogCopy = new Dog(*dog0);
    std::cout << "Original Dog idea 0: " << dog0->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog idea 0: " << dogCopy->getBrain()->getIdea(0) << std::endl;

    dogCopy->getBrain()->setIdea(0, "Bark at stranger");
    std::cout << "After modifying copy:" << std::endl;
    std::cout << "Original Dog idea 0: " << dog0->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy Dog idea 0: " << dogCopy->getBrain()->getIdea(0) << std::endl;

    std::cout << "\n=== Delete Animals ===" << std::endl;
    for (int i = 0; i < SIZE; i++)
        delete animals[i];

    delete dogCopy;

    return 0;
}
