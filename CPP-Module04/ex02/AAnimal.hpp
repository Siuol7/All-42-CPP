/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:31:52 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:25:01 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "system.hpp"

class	Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

		virtual void makeSound() const = 0;
		std::string	getType() const;

	protected:
		std::string	_type;
};