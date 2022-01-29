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

