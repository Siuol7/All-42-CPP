/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:12:19 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:03:18 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Undefined WA")
{LOG_RED("WA: Default constructor called");}

WrongAnimal::~WrongAnimal()
{LOG_RED("WA: Default destructor called");}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	LOG_RED("WA : Copy constructor called");
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	LOG_RED("WA : Copy assignment called");
	if (this != &other)
		this->_type = other._type;
	return *this;
}

void	WrongAnimal::makeSound() const{std::cout << "Wrong Animal sound" << std::endl;}

std::string	WrongAnimal::getType() const{return this->_type;}