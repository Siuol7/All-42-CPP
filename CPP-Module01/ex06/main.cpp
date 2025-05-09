/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:37:11 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/09 14:06:51 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	 main (int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
		std::cout << "[ Yapping ] " << std::endl;
	else
		harl.complain(av[1]);
}