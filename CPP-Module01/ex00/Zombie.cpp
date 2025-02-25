/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   #include "Zombie.hpp"ombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:24:16 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/25 14:24:44 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _name("Undefined"){};

Zombie::~Zombie()
{
	std::cout << _name << " is killed" << std::endl;
};

Zombie::Zombie(std::string name): _name(name.empty() ? "Undefined" : name){};

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};