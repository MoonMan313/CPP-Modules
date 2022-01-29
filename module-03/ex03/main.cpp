#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ScavTrap	Bloom("Bloom");
	DiamondTrap	Icy("Icy");

	Icy.attack(Bloom.getName());
	Bloom.takeDamage(1);

	Bloom.attack(Icy.getName());
	Icy.takeDamage(3);

	Icy.beRepaired(1);

	Icy.guardGate();
	Icy.highFivesGuys();

	return (0);
}
