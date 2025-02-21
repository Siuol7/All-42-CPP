/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 03:37:58 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/21 03:43:37 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNREADABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 0; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]) << std::endl;
		}
	}
	return (0);
}