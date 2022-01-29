//
// Created by evelina on 24.10.2021.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) :  Name(name), HitPoints(10),
											EnergyPoints(10), AttackDamage(0){
	std::cout << CYAN "New ClapTrap " << YELLOW name << CYAN "!" << std::endl RESET;
}

ClapTrap::~ClapTrap() {
	std::cout << PURPLE "ClapTrap " << YELLOW this->Name << PURPLE " left the game."
	<< std::endl RESET;
}

void ClapTrap::attack(const std::string &target) {
	if (this->EnergyPoints > 0) {
		std::cout << BLUE "ClapTrap " << YELLOW this->Name << BLUE " attack "
				  << YELLOW target << BLUE ", causing " << RED this->AttackDamage
				  << BLUE " points of damage!" << std::endl RESET;
		this->EnergyPoints--;
		std::cout << YELLOW " -1" << RED " Energy Point" << std::endl RESET;
	}
	else
		std::cout << RED "ClapTrap " << YELLOW this->Name
		<< RED " has 0 Energy points." << std::endl RESET;

}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->HitPoints <= amount)
		this->HitPoints = 0;
	else
		this->HitPoints -= amount;
	std::cout << YELLOW this->Name << RED " received damage. Hit Points are "
	<< YELLOW this->HitPoints << std::endl RESET;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->HitPoints += amount;
	std::cout << YELLOW this->Name << GREEN " has "
	<< YELLOW this->HitPoints << GREEN " Hit Points." << std::endl;
	this->EnergyPoints++;
	std::cout << YELLOW " +1" << GREEN " Energy Point" << std::endl;
}

const std::string &ClapTrap::getName() const {
	return Name;
}
