/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:57:46 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/18 15:25:22 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

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
