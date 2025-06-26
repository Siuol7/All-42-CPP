/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:57:46 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/26 23:41:34 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl

class	Fixed
{
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator = (const Fixed& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_value;
		static int const	_frac_bits = 8;
};

std::ostream& operator<<(std::ostream& os, Fixed const& obj);
