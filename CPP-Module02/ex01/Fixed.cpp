/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:57:42 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/26 23:44:28 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){LOG_GREEN("Fixed : Default constructor called");}

Fixed::Fixed(const int nb) : _value(nb << _frac_bits){LOG_GREEN("Fixed : Int constructor called");}

Fixed::Fixed(const float nb) : _value(roundf(nb * ( 1 << this->_frac_bits))){LOG_GREEN("Fixed : Float constructor called");}

Fixed::~Fixed(){LOG_GREEN("Fixed : Default destructor called");}

Fixed::Fixed(const Fixed& other)
{
	LOG_GREEN("Fixed : Copy constructor called");
	*this = other;
}

Fixed& Fixed::operator= (const Fixed &other)
{
	LOG_GREEN("Fixed : Copy assignment operator called");
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

float	Fixed::toFloat(void) const {return ((float)this->_value / (1 << this->_frac_bits));}

int		Fixed::toInt(void) const {return (this->_value >> this->_frac_bits);}

int		Fixed::getRawBits(void) const {return (this->_value);}

void	Fixed::setRawBits(int const raw) {this->_value = raw;}

std::ostream& operator<<(std::ostream &os, Fixed const& obj)
{
	os << obj.toFloat();
	return (os);
}