/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:08:34 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 17:04:51 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){};

Fixed::~Fixed(){};

Fixed::Fixed(const int nb) : _value(nb << _frac_bits){};

Fixed::Fixed(const float nb) : _value(roundf(nb * (1 << _frac_bits))){};

Fixed::Fixed(const Fixed& other){*this = other;}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->_value = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {return _value;}

void	Fixed::setRawBits(const int raw) {_value = raw;}

float	Fixed::toFloat(void) const {return _value / (1 << _frac_bits);}

int		Fixed::toInt(void) const {return _value >> _frac_bits;}

bool	Fixed::operator>(const Fixed& other) const {return this->_value > other.getRawBits();}

bool	Fixed::operator<(const Fixed& other) const {return this->_value < other.getRawBits();}

bool	Fixed::operator>=(const Fixed& other) const {return this->_value >= other.getRawBits();}

bool	Fixed::operator<=(const Fixed& other) const {return this->_value <= other.getRawBits();}

bool	Fixed::operator!=(const Fixed& other) const {return this->_value != other.getRawBits();}

Fixed	Fixed::operator++(void)
{
	Fixed	temp(*this);
	this->_value++;
	return (temp);
}

Fixed	Fixed::operator--(void)
{
	Fixed	temp(*this);
	this->_value--;
	return (temp);
}

Fixed&	Fixed::operator++(int)
{
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--(int)
{
	this->_value--;
	return (*this);
}


Fixed&	Fixed::max(Fixed& a, Fixed& b) {return a > b ? a : b;}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {return a < b ? a : b;}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {return a > b ? a : b;}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {return a < b ? a : b;}

std::ostream& operator<<(std::ostream& os, Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}