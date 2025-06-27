/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 01:15:17 by siuol             #+#    #+#             */
/*   Updated: 2025/06/27 09:03:42 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    LOG_GREEN("Ice : Default constructor called");
    this->_type = "Ice";
}

Ice::Ice(std::string const& type) : AMateria(type)
{
    LOG_GREEN("Ice : Constructor called");
    this->_type = type;
}

Ice::~Ice(){LOG_GREEN("Ice : Default destructor called");}

Ice::Ice(const Ice& other) : AMateria(other){LOG_GREEN("Ice : Copy constructor called");}

Ice&   Ice::operator=(const Ice& other)
{
    LOG_GREEN("Ice : Copy assignment called");
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Ice*   Ice::clone() const
{
    LOG_GREEN("Ice : clone() called");
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    LOG_GREEN("Ice : use() called");
    std::cout << "* shoots an icebolt at " << target.getName() << " *" << std::endl;
}