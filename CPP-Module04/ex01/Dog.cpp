/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:42:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/17 09:21:36 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{std::cout << "Dog : Default constructor called" << std::endl;}

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