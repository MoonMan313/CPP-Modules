//
// Created by evelina on 24.10.2021.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <iostream>
#include <string>



#define PURPLE		 	"\e[35m" <<
#define BLUE			"\e[34m" <<
#define GREEN			"\e[32m" <<
#define CYAN			"\e[36m" <<
#define RED				"\e[31m" <<
#define YELLOW			"\e[33m" <<
#define RESET			<< "\e[0m"

class ClapTrap {
protected:
	std::string Name;
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int AttackDamage;
public:
	ClapTrap(const std::string name);
	ClapTrap(const std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	virtual ~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string &getName() const;
};


#endif //EX00_CLAPTRAP_HPP
