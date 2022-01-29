#include "Zombie.hpp"

int main() {
    Zombie *zombie1, *zombie2, *zombie3;

    std::cout << "----------- Test NewZombie -----------" << std::endl;
    std::cout << "\nfunction call newZombie()..." << std::endl;
    zombie1 = newZombie("Bloom");
    std::cout << "function call newZombie()..." << std::endl;
    zombie2 = newZombie("Flora");
    std::cout << "function call newZombie()..." << std::endl;
    zombie3 = newZombie("Stella");

    std::cout << "\nfunction call announce()..." << std::endl;
    zombie1->announce();
    zombie2->announce();
    zombie3->announce();
    std::cout << "\nfreeing memory..." << std::endl;
    delete zombie1;
    delete zombie2;
    delete zombie3;

    std::cout << "\n----------- Test RandomChump -----------" << std::endl;
    std::cout << "\nfunction call randomChump..." << std::endl;
    randomChump("Musa");
    std::cout << "\nfunction call randomChump..." << std::endl;
    randomChump("Tecna");
    std::cout << "\nfunction call randomChump..." << std::endl;
    randomChump("Layla");
    std::cout << "\n----------- The end. -----------" << std::endl;
    return 0;
}
