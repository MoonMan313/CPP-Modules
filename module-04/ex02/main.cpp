#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NUM 6

int main() {
    Animal	*animals[NUM];
    Brain	*brain;

    for (int i = 0; i < NUM; i++)
    {
        if (i < (NUM / 2))
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        std::cout << animals[i]->getType() << std::endl;
    }

    for (int i = 0; i < (NUM / 2); ++i){
        brain = animals[i]->getBrain();
        brain->ideas[0] = "======I'm a cat! I'm a cat!====";
        brain->ideas[1] = "======I know how to purr.======";
        brain->ideas[2] = "======I love Christmas trees)==";
    }
    for (int i = 0; i < (NUM / 2); i++) {
        std::cout << animals[i]->getBrain()->ideas[0] << std::endl;
        std::cout << animals[i]->getBrain()->ideas[1] << std::endl;
        std::cout << animals[i]->getBrain()->ideas[2] << std::endl;
    }

    for (int i = 2; i < NUM; ++i){
        brain = animals[i]->getBrain();
        brain->ideas[0] = "------I'm a dog! I'm a dog!------";
        brain->ideas[1] = "------I like to bark.------------";
        brain->ideas[2] = "------I enjoy wagging my tail.---";
    }
    for (int i = 2; i < NUM; i++) {
        std::cout << animals[i]->getBrain()->ideas[0] << std::endl;
        std::cout << animals[i]->getBrain()->ideas[1] << std::endl;
        std::cout << animals[i]->getBrain()->ideas[2] << std::endl;
    }
    *(animals[1]) = *(animals[5]);
    std::cout << animals[1]->getBrain()->ideas[0] << std::endl;

    for (int i = 0; i < NUM; i++)
        delete animals[i];
}
