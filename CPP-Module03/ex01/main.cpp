/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:14:04 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/12 11:26:55 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"

int	main(void)
{
	ClapTrap	ct2("suc vat");
	ClapTrap	ct3("chua te");
	ScravTrap	st1;

	std::cout << std::endl << "First match" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		st1.attack("suc vat");
		ct2.takeDamage(2);
		ct2.beRepaired(1);
	}

	std::cout << std::endl << "Next match" << std::endl;
	st1.attack("chua te");
	ct3.takeDamage(2);
	ct3.beRepaired(1);

	st1.guardGate();
}