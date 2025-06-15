/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:14:04 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/14 00:01:18 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	ct1;
	ClapTrap	ct2("CT2");
	ScravTrap	st1("ST1");
	ScravTrap	st2(st1);
	FragTrap	ft1("FT1");

	st2.guardGate();
	ft1.highFivesGuys();
}