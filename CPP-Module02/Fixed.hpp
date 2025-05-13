/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:11:33 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/13 14:32:06 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed(); 	//constructor
		~Fixed();	//destructor
		Fixed(const Fixed& other); //copy cons
		Fixed& operator =(const Fixed& other); //copy asg

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int			_value;
		int const 	_frac_bits = 8;
};
