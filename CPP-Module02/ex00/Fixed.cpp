/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:11:24 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/26 23:38:54 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){LOG_GREEN("Fixed : Default constructor called");}

Fixed::~Fixed(){LOG_GREEN("Fixed : Default destructor called");}

Fixed::Fixed(const Fixed& other)
{
	LOG_GREEN("Fixed : Copy constructor called");
	*this = other;
}

Fixed& Fixed::operator= (const Fixed& other)
{
	LOG_GREEN("Fixed : Copy assignment operator called");
	if (this != &other)
		this->_value = other._value;
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}