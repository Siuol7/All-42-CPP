/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:42:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/19 13:13:00 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(){std::cout << "Dog : Default destructor called" << std::endl;}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog : Copy assignment called" << std::endl;
	Animal::operator=(other);
	return *this;
}

void	Dog::makeSound() const
{std::cout << "Dog sounds" << std::endl;}