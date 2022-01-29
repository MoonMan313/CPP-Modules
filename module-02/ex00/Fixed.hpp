//
// Created by Cheryle Dionna on 10/21/21.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int fractional = 8;
public:
	Fixed();

	virtual ~Fixed();

	Fixed(const Fixed &copy);

	Fixed &operator=(const Fixed &copy);

	void setRawBits(int const raw);

	int getRawBits(void) const;
};


#endif //EX00_FIXED_HPP
