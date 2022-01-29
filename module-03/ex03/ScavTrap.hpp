//
// Created by evelina on 24.10.2021.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(const std::string &name);
	virtual ~ScavTrap();
	void guardGate(void);
	void attack(std::string const &target);

};


#endif //EX01_SCAVTRAP_HPP
