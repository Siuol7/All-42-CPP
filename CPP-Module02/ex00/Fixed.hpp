/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:11:33 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/26 23:36:25 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl

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
		int					_value;
		static int const 	_frac_bits = 8;
};
