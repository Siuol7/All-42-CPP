/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:35:22 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 11:34:47 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){};

Fixed::~Fixed(){};

Fixed::Fixed(const int nb) : _value(nb << _frac_bits){};

Fixed::Fixed(const float nb) : _value(roundf(nb * (1 << _frac_bits))){};

Fixed::Fixed(const Fixed& other){*this = other;}

Fixed& Fixed::operator= (const Fixed& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

int	Fixed::getRawBits(void) const {return _value;}

void	Fixed::setRawBits(int const raw) {_value = raw;}

float	Fixed::toFloat(void) const {return _value / (1 << _frac_bits);}

int		Fixed::toInt(void) const {return _value >> _frac_bits;}

//COMPARE

bool	Fixed::operator>(const Fixed& other) const {return (this->getRawBits() > other.getRawBits()) ? true : false;}

bool	Fixed::operator<(const Fixed& other) const {return (this->getRawBits() < other.getRawBits()) ? true : false;}

bool	Fixed::operator>=(const Fixed& other) const {return (this->getRawBits() >= other.getRawBits()) ? true : false;}

bool	Fixed::operator<=(const Fixed& other) const {return (this->getRawBits() <= other.getRawBits()) ? true : false;}

bool	Fixed::operator!=(const Fixed& other) const {return (this->getRawBits() != other.getRawBits()) ? true : false;}

//CALCULATING

Fixed	Fixed::operator+(const Fixed& other) const {return Fixed(this->toFloat() + other.toFloat());}

Fixed	Fixed::operator-(const Fixed& other) const {return Fixed(this->toFloat() - other.toFloat());}

Fixed	Fixed::operator*(const Fixed& other) const {return Fixed(this->toFloat() * other.toFloat());}

Fixed	Fixed::operator/(const Fixed& other) const {return Fixed(this->toFloat() / other.toFloat());}

//(IN/DE)CREMENT

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int none)
{
	Fixed	temp(*this);
	this->_value++;
	return (temp);
}

Fixed	Fixed::operator--(int none)
{
	Fixed	temp(*this);
	this->_value--;
	return (temp);
}



