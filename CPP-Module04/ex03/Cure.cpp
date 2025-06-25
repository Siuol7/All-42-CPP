/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:16:25 by siuol             #+#    #+#             */
/*   Updated: 2025/06/25 22:52:16 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure : Default constructor called" << std::endl;
    this->_type = "cure";
}

Cure::Cure(std::string const& type) : AMateria(type)
{
    std::cout << "Cure : Constructor called" << std::endl;
    this->_type = type;
}

Cure::~Cure(){std::cout << "Cure : Default destructor called" << std::endl;}

Cure::Cure(const Cure& other) : AMateria(other){std::cout << "Cure : Copy constructor called" << std::endl;}

Cure&   Cure::operator=(const Cure& other)
{
    std::cout << "Cure : Copy assignment called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

Cure*   Cure::clone() const
{
    std::cout << "Cure : clone() called" << std::endl;
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "Cure : use() called" << std::endl;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
