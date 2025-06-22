/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:31:41 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/23 01:27:44 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal() : _type("Undefined Animal")
{std::cout << "Animal: Default constructor called" << std::endl;}

Animal::~Animal(){std::cout << "Animal: Default destructor called" << std::endl;}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal : Copy assignment called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	Animal::makeSound(void) const{std::cout << "Animal's sounds" << std::endl;}

std::string	Animal::getType(void) const{return this->_type;}