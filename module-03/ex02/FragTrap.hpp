//
// Created by evelina on 24.10.2021.
//

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(const std::string &name);
	virtual ~FragTrap();
	void attack(std::string const &target);
	void highFivesGuys(void);

};


#endif //EX02_FRAGTRAP_HPP
