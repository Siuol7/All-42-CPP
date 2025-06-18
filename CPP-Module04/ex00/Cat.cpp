/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:40:21 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/17 09:21:29 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _type("Cat")
{std::cout << "Cat : Default constructor called" << std::endl;}

Cat::~Cat(){std::cout << "Cat : Default destructor called" << std::endl;}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat : Copy constructor called" << std::endl;
	this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat : Copy assignment called" << std::endl;
	Animal::operator=(other);
	return *this;
}

void	Cat::makeSound() const
{std::cout << "Cat sounds" << std::endl;}