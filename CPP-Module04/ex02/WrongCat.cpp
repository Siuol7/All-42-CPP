/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:54:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/27 00:28:38 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    LOG_RED("WrongCat : Default constructor called");
    this->_type = "WrongCat";
}

WrongCat::~WrongCat(){LOG_RED("WrongCat : Default destructor called");}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    LOG_RED("WrongCat : Copy constructor called");
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    LOG_RED("WrongCat : Copy assignment called");
    WrongAnimal::operator=(other);
    return *this;
}

void    WrongCat::makeSound(void) const
{std::cout << "WrongCat sound" << std::endl;}