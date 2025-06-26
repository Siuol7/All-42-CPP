/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:31:41 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:10:43 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Undefined Animal")
{LOG_GREEN("Animal: Default constructor called");}

Animal::~Animal(){LOG_GREEN("Animal: Default destructor called");}

Animal::Animal(const Animal& other)
{
	LOG_GREEN("Animal : Copy constructor called");
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	LOG_GREEN("Animal : Copy assignment called");
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Animal::makeSound(void) const{std::cout << "Animal's sounds" << std::endl;}

std::string	Animal::getType(void) const{return this->_type;}