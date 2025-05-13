/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:57:42 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/13 15:26:35 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const int nb) : _value(nb){std::cout << "Int constructor called" << std::endl;}

Fixed::Fixed(const float nb) : _value(nb){std::cout << "Float constructor called" << std::endl;}

Fixed::~Fixed(){std::cout << "Default destructor called" << std::endl;}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator= (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other._value;
	return *this;
}

float	Fixed::toFloat(void) const
{

}

int		Fixed::toInt(void) const
{

}
