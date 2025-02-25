/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new#include "Zombie.hpp"ombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:24:11 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/25 14:24:40 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	try
	{
		Zombie	*newzb = new Zombie(name);
		return (newzb);
	}
	catch (std::bad_alloc &error)
	{
		std::cout << "Memory allocation failed: " << error.what() << std::endl;
		return (nullptr);
	}
}