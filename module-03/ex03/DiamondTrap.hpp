//
// Created by evelina on 24.10.2021.
//

#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
	std::string name;
public:
	DiamondTrap(const std::string &name);

	virtual ~DiamondTrap();
	void	attack( const std::string &target );
	void	whoAmI( void ) const ;
};


#endif //EX03_DIAMONDTRAP_HPP
