/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:14:04 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/10 16:05:54 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct1;
	ClapTrap	ct2("suc vat");
	ClapTrap	ct3("chua te");

	std::cout << std::endl << "First match" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		ct1.attack("B");
		ct2.takeDamage(2);
		ct2.beRepaired(1);
	}

	std::cout << std::endl << "Next match" << std::endl;
	ct1.attack("B");
	ct3.takeDamage(2);
	ct3.beRepaired(1);
}