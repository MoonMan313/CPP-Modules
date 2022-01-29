//
// Created by evelina on 24.10.2021.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20) {
	std::cout << CYAN "ClapTrap " << YELLOW name << CYAN " transformed into ScavTrap!" << std::endl RESET;
}

ScavTrap::~ScavTrap() {
	std::cout << YELLOW this->Name << PURPLE " has lost his ScavTrap's power."
			  << std::endl RESET;
}

void ScavTrap::guardGate(void){
	std::cout << YELLOW this->Name RESET << " entered Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->EnergyPoints > 0) {
		std::cout << BLUE "ScavTrap " << YELLOW this->Name << BLUE " attack "
				  << YELLOW target << BLUE ", causing " << RED this->AttackDamage
				  << BLUE " points of damage!" << std::endl RESET;
		this->EnergyPoints--;
		std::cout << YELLOW " -1" << RED " Energy Point" << std::endl RESET;
	}
	else
		std::cout << RED "ScavTrap " << YELLOW this->Name
				  << RED " has 0 Energy points." << std::endl RESET;
}
