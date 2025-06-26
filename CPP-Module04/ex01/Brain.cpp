/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:29:23 by siuol             #+#    #+#             */
/*   Updated: 2025/06/27 00:18:22 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){LOG_GREEN("Brain : Default constructor called");}

Brain::~Brain(){LOG_GREEN("Brain : Default destructor called");}

Brain::Brain(const Brain& other)
{
    LOG_GREEN("Brain : Copy constructor called");
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    LOG_GREEN("Brain : Copy assignment called");
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return *this;
}