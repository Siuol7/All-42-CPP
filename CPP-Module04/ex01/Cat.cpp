/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:40:21 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/19 18:24:43 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default constructor called" << std::endl;
	this->_type = "Cat";
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc &err)
	{
		std::cerr << err.what() << "Cat : Bad alloc" << std::endl;
		throw;
	}
}

Cat::~Cat()
{
	std::cout << "Cat : Default destructor called" << std::endl;
	delete	this->_brain;
}

Cat::Cat(const Cat& other) : Animal(other), _brain(nullptr)
{
	std::cout << "Cat : Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat : Copy assignment called" << std::endl;
	if (this != &other)
	{
		this->_type = "Cat";
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

void	Cat::makeSound() const
{std::cout << "Cat sounds" << std::endl;}