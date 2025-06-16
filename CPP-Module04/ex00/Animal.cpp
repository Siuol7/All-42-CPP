/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:31:41 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 16:22:27 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

void	Animal::makeSound(void){std::cout << "Animal's sounds" << std::endl;}

std::string	Animal::getType(void){return this->_type;}