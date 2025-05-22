/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:57:42 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/22 08:38:04 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int nb) : _value(nb << _frac_bits){std::cout << "Int constructor called" << std::endl;}

Fixed::Fixed(const float nb) : _value(roundf(nb * ( 1 << this->_frac_bits))){std::cout << "Float constructor called" << std::endl;}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator= (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
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