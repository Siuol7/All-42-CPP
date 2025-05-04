/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:58:29 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/05 00:46:35 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	valid_check(std::ifstream inf, std::ofstream outf)
{
	
}

int	main(int ac, char **av)
{
	std::ifstream	inf;
	std::ofstream	outf;
	std::string		org_str = av[2];
	std::string		rnew_str = av[3];

	if (ac != 4)
	{
		std::cout << "Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	if (valid_check(!inf, outf))
	{
		std::cerr << "Opening file failed" << std::endl;
		return (EXIT_FAILURE);
	}
}