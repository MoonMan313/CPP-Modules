#include <iostream>
#include <string>

void	uppercase_word(char *s)
{
	for(int i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= 97 && s[i] <= 122)
			std::cout << (char)(s[i] - 32);
		else
			std::cout << s[i];
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; ++i)
			uppercase_word(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
