/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:58:03 by siuol             #+#    #+#             */
/*   Updated: 2025/07/09 15:42:39 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Undefined")
{LOG_GREEN("AMateria : Default constructor called");}

AMateria::AMateria(std::string const &type) : _type(type)
{LOG_GREEN("AMateria : Constructor called");}

AMateria::~AMateria(){LOG_GREEN("Default destructor called");}

AMateria::AMateria(const AMateria& other)
{
    LOG_GREEN("AMateria : Copy constructor called");
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    LOG_GREEN("AMateria : Copy assignment called");
    if (this != &other)
        this->_type = other._type;
    return *this;
}

std::string const& AMateria::getType() const
{
    LOG_GREEN("AMateria : getType() called");
    return this->_type;
}

void    AMateria::use(ICharacter& target)
{
    LOG_GREEN("AMateria : use() called");
    std::cout << "AMateria use " << target.getName() << std::endl;
} 
