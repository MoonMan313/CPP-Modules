#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;

    const WrongAnimal *Wr_meta = new WrongAnimal();
    const WrongAnimal *Wr_i = new WrongCat();
    std::cout << Wr_i->getType() << " " << std::endl;
    Wr_i->makeSound();
    Wr_meta->makeSound();
    delete Wr_i;
    delete Wr_meta;
}
