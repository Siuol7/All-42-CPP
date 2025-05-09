/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:37:37 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/09 13:11:45 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout <<  "This is debug!" << std::endl;
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
	std::cout << "This is error!"  << std::endl;
}

void	complain(std::string msg)
{
	std::string	type[4] =
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
}