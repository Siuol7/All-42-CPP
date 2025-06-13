/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:14:04 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/13 09:45:25 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"

int	main(void)
{
	ScravTrap	st1;
	ClapTrap	ct2("A");
	ClapTrap	ct3("B");
	ScravTrap	st2("C");
	ScravTrap 	st3(st2);

	std::cout << std::endl << "First match" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		st1.attack("A");
		ct2.takeDamage(2);
		ct2.beRepaired(1);
	}

	std::cout << std::endl << "Next match" << std::endl;
	st1.attack("B");
	ct3.takeDamage(2);
	ct3.beRepaired(1);

	std::cout << std::endl;
	st2.guardGate();
}