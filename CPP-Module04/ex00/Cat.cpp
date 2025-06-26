/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:40:21 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:00:49 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	LOG_GREEN("Cat : Default constructor called");
	this->_type = "Cat";
}

Cat::~Cat(){LOG_GREEN("Cat : Default destructor called");}

Cat::Cat(const Cat& other) : Animal(other)
{
	LOG_GREEN("Cat : Copy constructor called");
	this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other)
{
	LOG_GREEN("Cat : Copy assignment called");
	Animal::operator=(other);
	return *this;
}

void	Cat::makeSound() const{std::cout << "Cat sounds" << std::endl;}