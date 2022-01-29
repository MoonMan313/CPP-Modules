#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
int	main(void)
{
	FragTrap	Stella("Stella");
	ClapTrap	Icy("Icy");

	Stella.highFivesGuys();

	Icy.attack(Stella.getName());
	Stella.takeDamage(3);
	Stella.beRepaired(1);
	Stella.attack(Icy.getName());
	return (0);
}
