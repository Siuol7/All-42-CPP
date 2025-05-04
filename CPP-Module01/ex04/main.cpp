/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:58:29 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/05 02:00:24 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	valid_check(std::ifstream& inf, std::ofstream& outf, std::string file)
{
	inf.open(file);
	outf.open("outfile");
	if (!inf || !outf)
		return (0);
	return (1);
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
	if (!valid_check(inf, outf, av[1]))
	{
		std::cerr << "Opening file failed" << std::endl;
		return (EXIT_FAILURE);
	}
	if (org_str.empty())
		return;
}