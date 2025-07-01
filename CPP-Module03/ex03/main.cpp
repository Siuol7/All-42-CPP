/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:14:04 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/01 10:22:08 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	ct1;
	ClapTrap	ct2("CT2");
	ScravTrap	st1("ST1");
	ScravTrap	st2(st1);
	FragTrap	ft1("FT1");
	DiamondTrap	dm("DM");

	st2.guardGate();
	ft1.highFivesGuys();
	dm.whoAmI();
}