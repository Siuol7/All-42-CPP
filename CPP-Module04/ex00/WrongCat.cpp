/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:54:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/19 13:31:38 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat : Default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat(){std::cout << "WrongCat : Default destructor called" << std::endl;}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat : Copy constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat : Copy assignment called" << std::endl;
    WrongAnimal::operator=(other);
    return *this;
}

void    WrongCat::makeSound(void) const
{std::cout << "WrongCat sound" << std::endl;}