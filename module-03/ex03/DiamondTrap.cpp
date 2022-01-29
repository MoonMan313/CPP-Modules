//
// Created by evelina on 24.10.2021.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	ClapTrap::Name = name + "_clap_name";
	this->name = name;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	std::cout << CYAN "FragTrap " << YELLOW name << CYAN " transformed into DiamondTrap!" << std::endl RESET;

}

DiamondTrap::~DiamondTrap() {
	std::cout << YELLOW this->name << PURPLE " has lost his DiamondTrap's power."
			  << std::endl RESET;
}

void DiamondTrap::whoAmI(void) const {
	std::cout << "I am " << YELLOW this->name RESET << " and my ClapTrap name is "
			  << YELLOW ClapTrap::Name RESET << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}
