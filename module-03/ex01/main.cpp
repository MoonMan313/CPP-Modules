#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Stella("Stella");
	ScavTrap	Bloom("Bloom");
	ClapTrap	Icy("Icy");

	Icy.attack(Bloom.getName());
	Bloom.takeDamage(1);

	Stella.attack(Icy.getName());
	Icy.takeDamage(3);

	Bloom.beRepaired(1);
	Icy.beRepaired(1);

	Bloom.attack(Icy.getName());
	Bloom.guardGate();

	Icy.attack(Bloom.getName());
	Icy.attack(Bloom.getName());

	return (0);
}
