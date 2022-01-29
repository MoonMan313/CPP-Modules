//
// Created by Cheryle Dionna on 10/21/21.
//

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy){
	this->value = copy.value;
}

Fixed::Fixed(const int num) {
	this->value = num << this->fractional;
}

Fixed::Fixed(const float num) {
	this->value = (int)roundf(num * (1 << this->fractional));
}

Fixed &Fixed::operator=(const Fixed &copy){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &copy) {
		return *this;
	}
	this->value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat() const {
	return (float)this->value / (float)(1 << this->fractional);
}

int Fixed::toInt() const {
	return (this->value  >> this->fractional);
}

std::ostream &operator<<(std::ostream& out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}