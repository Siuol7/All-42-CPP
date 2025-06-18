/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:12:19 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/17 10:12:34 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Undefined WA")
{std::cout << "WA: Default constructor called" << std::endl;}

WrongAnimal::~WrongAnimal()
{std::cout << "WA: Default destructor called" << std::endl;}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WA : Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WA : Copy assignment called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	WrongAnimal::makeSound() const
{std::cout << "Wrong Animal sound" << std::endl;}

std::string	WrongAnimal::getType() const
{return this->_type;}