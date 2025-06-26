/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:42:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:19:50 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	LOG_GREEN("Dog : Default constructor called");
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
	LOG_GREEN("Dog : Default destructor called");
	delete	this->_brain;
}

Dog::Dog(const Dog& other) : Animal(other), _brain(nullptr)
{
	LOG_GREEN("Dog : Copy constructor called");
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	LOG_GREEN("Dog : Copy assignment called");
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