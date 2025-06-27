/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:16:25 by siuol             #+#    #+#             */
/*   Updated: 2025/06/27 09:03:25 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    LOG_GREEN("Cure : Default constructor called");
    this->_type = "cure";
}

Cure::Cure(std::string const& type) : AMateria(type)
{
    LOG_GREEN("Cure : Constructor called");
    this->_type = type;
}

Cure::~Cure(){LOG_GREEN("Cure : Default destructor called");}

Cure::Cure(const Cure& other) : AMateria(other){LOG_GREEN("Cure : Copy constructor called");}

Cure&   Cure::operator=(const Cure& other)
{
    LOG_GREEN("Cure : Copy assignment called");
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Cure*   Cure::clone() const
{
    LOG_GREEN("Cure : clone() called");
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    LOG_GREEN("Cure : use() called");
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}