/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:35:22 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 10:51:43 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){};

Fixed::~Fixed(){};

Fixed::Fixed(const int nb) : _value(nb << _frac_bits){};

Fixed::Fixed(const float nb) : _value(roundf(nb * (1 << _frac_bits))){};

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed& Fixed::operator= (const Fixed& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

int	Fixed::getRawBits(void) const {return _value;}

void	Fixed::setRawBits(int const raw) {_value = raw;}

float	toFloat

bool	Fixed::operator>(const Fixed& other) const {return (this->_value > other._value) ? true : false;}

bool	Fixed::operator<(const Fixed& other) const {return (this->_value < other._value) ? true : false;}

bool	Fixed::operator>=(const Fixed& other) const {return (this->_value >= other._value) ? true : false;}

bool	Fixed::operator<=(const Fixed& other) const {return (this->_value <= other._value) ? true : false;}

bool	Fixed::operator!=(const Fixed& other) const {return (this->_value != other._value) ? true : false;}