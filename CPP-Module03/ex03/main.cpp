/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:14:04 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/03 00:18:13 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	ct1;
	ClapTrap	ct2("CT2");
	ScavTrap	st1("ST1");
	ScavTrap	st2(st1);
	FragTrap	ft1("FT1");
	DiamondTrap	dm("DM");
	std::cout << std::endl;

	st2.guardGate();
	ft1.highFivesGuys();
	dm.whoAmI();
	std::cout << std::endl;
}