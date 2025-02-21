/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 03:17:02 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/21 03:26:38 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j] != '\0'; j++)
				std::cout << (char)std::toupper(av[i][j]) << std::endl;
		}
	}
	return (0);
}
