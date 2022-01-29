//
// Created by evelina on 24.10.2021.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30) {
	std::cout << CYAN "ClapTrap " << YELLOW name << CYAN " transformed into FragTrap!" << std::endl RESET;
}

FragTrap::~FragTrap() {
	std::cout << YELLOW this->Name << PURPLE " has lost his FragTrap's power."
			  << std::endl RESET;
}

void FragTrap::attack(const std::string &target) {
	if (this->EnergyPoints > 0) {
		std::cout << BLUE "FragTrap " << YELLOW this->Name << BLUE " attack "
				  << YELLOW target << BLUE ", causing " << RED this->AttackDamage
				  << BLUE " points of damage!" << std::endl RESET;
		this->EnergyPoints--;
		std::cout << YELLOW " -1" << RED " Energy Point" << std::endl RESET;
	}
	else
		std::cout << RED "FragTrap " << YELLOW this->Name
				  << RED " has 0 Energy points." << std::endl RESET;
}

void FragTrap::highFivesGuys(void) {
	std::cout << YELLOW this->Name RESET " says: \"Guys, give me five!\"" << std::endl;
}
