/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:35:22 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/01 16:24:09 by caonguye         ###   ########.fr       */
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
		this->_value = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {return _value;}

void	Fixed::setRawBits(int const raw) {_value = raw;}

float	Fixed::toFloat(void) const {return (float)_value / (1 << _frac_bits);}

int		Fixed::toInt(void) const {return _value >> _frac_bits;}

//COMPARE

bool	Fixed::operator>(const Fixed& other) const {return (this->getRawBits() > other.getRawBits());}

bool	Fixed::operator<(const Fixed& other) const {return (this->getRawBits() < other.getRawBits());}

bool	Fixed::operator>=(const Fixed& other) const {return (this->getRawBits() >= other.getRawBits());}

bool	Fixed::operator<=(const Fixed& other) const {return (this->getRawBits() <= other.getRawBits());}

bool	Fixed::operator!=(const Fixed& other) const {return (this->getRawBits() != other.getRawBits());}

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

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->_value++;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	this->_value--;
	return (temp);
}


//MAX/MIN

Fixed& Fixed::max(Fixed& a, Fixed& b){return a > b ? a : b;}
Fixed& Fixed::min(Fixed& a, Fixed& b){return a < b ? a : b;}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b){return a > b ? a : b;}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b){return a < b ? a : b;}


std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
