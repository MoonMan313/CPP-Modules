#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Stella("Stella");
	ClapTrap	Bloom("Bloom");
	ClapTrap	Icy("Icy");

	Icy.attack(Bloom.getName());
	Bloom.takeDamage(1);

	Stella.attack(Icy.getName());
	Icy.takeDamage(3);

	Bloom.beRepaired(1);
	Icy.beRepaired(1);

	return (0);
}
