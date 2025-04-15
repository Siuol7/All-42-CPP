/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 02:09:24 by caonguye          #+#    #+#             */
/*   Updated: 2025/03/04 11:47:46 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	try
	{
		Zombie	*horde = new Zombie[N];

		for (int i = 0; i < N; i++)
			horde[i].create(name);
		return (horde);
	}
	catch (std::bad_alloc &error)
	{
		std::cerr << "Memory allocation failed " << error.what() << std::endl;
		return (nullptr);
	}
}