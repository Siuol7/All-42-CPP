/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:58:29 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/02 23:58:13 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int	main(int ac, char **av)
{
	std::ifstream	inf;
	std::ofstream	outf;
	std::string		org = av[2];
	std::string		replace = av[3];

	if (ac != 4)
	{
		std::cout << "Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	if (valid_check)
}