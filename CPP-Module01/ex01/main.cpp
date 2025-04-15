/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 02:09:33 by caonguye          #+#    #+#             */
/*   Updated: 2025/03/04 11:47:52 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(5, "x4cch3tsuytjnh");

	if (horde == nullptr)
		return (1);
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
