//
// Created by Cheryle Dionna on 10/21/21.
//

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed {
private:
	int value;
	static const int fractional = 8;
public:
	Fixed();

	virtual ~Fixed();

	Fixed(const Fixed &copy);

	Fixed(const int value);

	Fixed(const float value);


	Fixed &operator=(const Fixed &copy);

	float toFloat(void) const;

	int toInt(void) const;

	void setRawBits(int const raw);

	int getRawBits(void) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif //EX01_FIXED_HPP
