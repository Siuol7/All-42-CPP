/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:12:19 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/17 09:21:10 by caonguye         ###   ########.fr       */
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
	if ()
}