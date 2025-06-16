/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:31:52 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 13:32:04 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Animal
{
	public :
		Animal();
		~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

		virtual void makeSound();
		std::string	getType();

	protected:
		std::string	_type;
};