/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:14:04 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/03 00:17:58 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st1;
	ClapTrap	ct2("A");
	ClapTrap	ct3("B");
	ScavTrap	st2("C");
	ScavTrap 	st3(st2);
	std::cout << std::endl;

	std::cout << std::endl << "First match" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		st1.attack("A");
		ct2.takeDamage(2);
		ct2.beRepaired(1);
	}

	std::cout << std::endl;
	std::cout << std::endl << "Next match" << std::endl;
	st1.attack("B");
	ct3.takeDamage(2);
	ct3.beRepaired(1);

	std::cout << std::endl;
	st2.guardGate();
	st3.takeDamage(2);
	std::cout << std::endl;
}