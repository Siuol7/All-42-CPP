/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:58:03 by siuol             #+#    #+#             */
/*   Updated: 2025/06/24 01:01:12 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Undefined")
{std::cout << "AMateria : Default constructor called" << std::endl;}

AMateria::AMateria(std::string const &type) : _type(type)
{std::cout << "AMateria : Constructor called" << std::endl;}