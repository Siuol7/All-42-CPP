/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:42:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:01:49 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	LOG_GREEN("Dog : Default constructor called");
	this->_type = "Dog";
}

Dog::~Dog(){LOG_GREEN("Dog : Default destructor called");}

Dog::Dog(const Dog& other) : Animal(other)
{
	LOG_GREEN("Dog : Copy constructor called");
	this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other)
{
	LOG_GREEN("Dog : Copy assignment called");
	Animal::operator=(other);
	return *this;
}

void	Dog::makeSound() const{std::cout << "Dog sounds" << std::endl;}