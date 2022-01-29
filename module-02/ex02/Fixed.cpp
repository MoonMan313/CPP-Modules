//
// Created by Cheryle Dionna on 10/21/21.
//

#include "Fixed.hpp"

Fixed::Fixed() {
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
	if (this == &copy) {
		return *this;
	}
	this->value = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits(void) const {
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return (float)this->value / (float)(1 << this->fractional);
}

int Fixed::toInt() const {
	return (this->value  >> this->fractional);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator>(Fixed const &fixed) const {
	return (this->value > fixed.getRawBits());
}

bool Fixed::operator<(Fixed const &fixed) const {
	return (this->value < fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixed) const {
	return (this->value >= fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed) const {
	return (this->value <= fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &fixed) const {
	return (this->value == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixed) const {
	return (this->value != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed & fixed) const{
	Fixed sum;
	sum.setRawBits(this->value + fixed.getRawBits());
	return (sum);
}

Fixed Fixed::operator-(const Fixed & fixed) const{
	Fixed sub;
	sub.setRawBits(this->value - fixed.getRawBits());
	return (sub);
}

Fixed & Fixed::operator++(void){
	this->value++;
	return (*this);
}

Fixed & Fixed::operator--(void){
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed inc(*this);
	++(*this);
	return (inc);
}

Fixed Fixed::operator--(int){
	Fixed rtn(*this);
	--(*this);
	return (rtn);
}

Fixed Fixed::operator*(const Fixed & fixed) const
{
	Fixed mult;
	mult.setRawBits((this->value * fixed.getRawBits()) >> this->fractional);
	return (mult);
}

Fixed Fixed::operator/(const Fixed & fixed) const
{
	Fixed div;
	div.setRawBits((this->value << this->fractional) / fixed.getRawBits());
	return (div);
}

Fixed	&Fixed::min( Fixed &one, Fixed &two)
{
	if (one < two)
		return (one);
	else
		return (two);
}

const Fixed	&Fixed::min( const Fixed &one, const Fixed &two)
{
	if (one < two)
		return (one);
	else
		return (two);
}

Fixed	&Fixed::max( Fixed &one, Fixed &two)
{
	if (one > two)
		return (one);
	else
		return (two);
}

const Fixed	&Fixed::max( const Fixed &one, const Fixed &two)
{
	if (one > two)
		return (one);
	else
		return (two);
}