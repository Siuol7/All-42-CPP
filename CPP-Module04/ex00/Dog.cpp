/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:42:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 17:23:20 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog : Default constructor called" << std::endl;
}

Dog::~Dog(){std::cout << "Dog : Default destructor called" << std::endl;}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->_type = other._type;
	std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	Animal::operator=(other);
	std::cout << "Dog : Copy assignment called" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{std::cout << "Dog sounds" << std::endl;}