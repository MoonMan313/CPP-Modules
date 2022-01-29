#include "Zombie.hpp"

int main() {
    Zombie *zombie1;

    std::cout << "----------- Test ZombieHorde -----------" << std::endl;
    std::cout << "\nfunction call zombieHorde()..." << std::endl;
    zombie1 = zombieHorde(NUM, "Horde");

    std::cout << "\nfunction call announce()..." << std::endl;
    for (int i = 0; i < NUM; ++i) {
        zombie1[i].announce();
    }
    std::cout << "\nfreeing memory..." << std::endl;
    delete[] zombie1;

    std::cout << "\n----------- The end. -----------" << std::endl;
    return 0;
}
