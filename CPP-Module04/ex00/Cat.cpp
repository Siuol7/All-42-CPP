/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:40:21 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 17:19:11 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat : Default constructor called" << std::endl;
}

Cat::~Cat(){std::cout << "Cat : Default destructor called" << std::endl;}

Cat::Cat(const Cat& other) : Animal(other)
{
	this->_type = other._type;
	std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	Animal::operator=(other);
	std::cout << "Cat : Copy assignment called" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{std::cout << "Cat sounds" << std::endl;}