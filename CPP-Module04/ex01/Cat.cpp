/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:40:21 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:16:57 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	LOG_GREEN("Cat : Default constructor called");
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
	LOG_GREEN("Cat : Default destructor called");
	delete	this->_brain;
}

Cat::Cat(const Cat& other) : Animal(other), _brain(nullptr)
{
	LOG_GREEN("Cat : Copy constructor called");
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	LOG_GREEN("Cat : Copy assignment called");
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