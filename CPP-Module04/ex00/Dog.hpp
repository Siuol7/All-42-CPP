/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:42:17 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 17:22:13 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

		void	makeSound() const;
};
