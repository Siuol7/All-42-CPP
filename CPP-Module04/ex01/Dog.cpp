/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:42:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/20 14:09:03 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->_type = "Dog";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc &err)
	{
		std::cerr << err.what() << "Dog : Bad alloc" << std::endl;
		throw;
	}
}

Dog::~Dog()
{
	std::cout << "Dog : Default destructor called" << std::endl;
	delete	this->_brain;
}

Dog::Dog(const Dog& other) : Animal(other), _brain(nullptr)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog : Copy assignment called" << std::endl;
	if (this != &other)
	{
		this->_type = "Dog";
		if (this->_brain)
			delete this->_brain;
		try
		{
			this->_brain = new Brain(*other._brain);
		}
		catch(const std::bad_alloc& err)
		{
			std::cerr << err.what() << "Bad alloc" << std::endl;
			throw;
		}
	}
	return *this;
}

void	Dog::makeSound() const
{std::cout << "Dog sounds" << std::endl;}