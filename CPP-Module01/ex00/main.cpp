/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:24:06 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/18 15:08:11 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie z1 = Zombie();
	z1.announce();

	Zombie *z2 = newZombie("x4cch3tc0d0n");
	if(z2 == nullptr)
	{
		delete (z2);
		return (1);
	}
	z2->announce();
	delete(z2);

	randomChump("x4cch3td4tjnh");
	return (0);
}