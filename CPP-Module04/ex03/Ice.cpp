/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 01:15:17 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 22:52:08 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice : Default constructor called" << std::endl;
    this->_type = "Ice";
}

Ice::Ice(std::string const& type) : AMateria(type)
{
    std::cout << "Ice : Constructor called" << std::endl;
    this->_type = type;
}

Ice::~Ice(){std::cout << "Ice : Default destructor called" << std::endl;}

Ice::Ice(const Ice& other) : AMateria(other){std::cout << "Ice : Copy constructor called" << std::endl;}

Ice&   Ice::operator=(const Ice& other)
{
    std::cout << "Ice : Copy assignment called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Ice*   Ice::clone() const
{
    std::cout << "Ice : clone() called" << std::endl;
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "Ice : use() called" << std::endl;
    std::cout << "* shoots an icebolt at " << target.getName() << " *" << std::endl;
}