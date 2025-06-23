/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:58:03 by siuol             #+#    #+#             */
/*   Updated: 2025/06/24 01:48:49 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Undefined")
{std::cout << "AMateria : Default constructor called" << std::endl;}

AMateria::AMateria(std::string const &type) : _type(type)
{std::cout << "AMateria : Constructor called" << std::endl;}

AMateria::~AMateria(){std::cout << "Default destructor called" << std::endl;}

AMateria::AMateria(const AMateria& other)
{
    std::cout << "AMateria : Copy constructor called" << std::endl;
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    std::cout << "AMateria : Copy assignment called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void    AMateria::use(ICharacter& target){}
