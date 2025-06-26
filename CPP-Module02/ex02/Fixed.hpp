/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:35:19 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/26 23:45:00 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl


class Fixed
{
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);

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

std::ostream& operator<<(std::ostream &os, const Fixed& obj);