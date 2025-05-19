/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:08:34 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 15:35:26 by caonguye         ###   ########.fr       */
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

bool	