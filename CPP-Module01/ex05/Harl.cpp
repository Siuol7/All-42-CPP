/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:58:53 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/09 13:00:53 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "This is debug!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "This is info!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "This is warning!" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is error!" << std::endl;
}

void	Harl::complain(std::string msg)
{
	std::string	type[4]=
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Harl::*complain_pack[4])() =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};

	for (int i = 0; i < 4; i++)
	{
		if (msg == type[i])
			(this->*complain_pack[i])();
	}
}
