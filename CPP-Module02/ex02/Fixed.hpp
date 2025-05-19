/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:35:19 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 10:24:05 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>


class Fixed
{
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed operator = (const Fixed& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		//COMPARE
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;

		//CALCULATING
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		//(IN/DE)CREMENT
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		//MAX/MIN
		static	Fixed& 		max(Fixed& a, Fixed& b);
		static	Fixed&		min(Fixed& a, Fixed& b);
		static	const Fixed& 	max(const Fixed& a, const Fixed& b);
		static	const Fixed&	min(const Fixed& a, const Fixed& b);

	private:
		int					_value;
		static int const 	_frac_bits = 8;
};

std::ostream& operator<<(std::ostream &os, Fixed& obj);