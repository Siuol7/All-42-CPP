/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:54:09 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/15 19:54:18 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat")
{std::cout << "WrongCat : Default constructor called" << std::endl;}

WrongCat::~WrongCat(){std::cout << "WrongCat : Default destructor called" << std::endl;}

WrongCat::WrongCat(const WrongCat& other)
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

void    WrongCat::makeSound(void)
{std::cout << "WrongCat sound" << std::endl;}