/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:58:29 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/14 20:12:28 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int	valid_check(std::ifstream& inf, std::ofstream& outf, std::string file)
{
	inf.open(file);
	outf.open('<' + file + '>' +".replace");
	if (!inf || !outf)
		return (0);
	return (1);
}
void	read_in(std::string& lines, std::ifstream& inf)
{
	std::stringstream	buffer;

	buffer << inf.rdbuf();
	lines = buffer.str();
}
void	search_and_replace(std::ifstream& inf, std::ofstream& outf,
							std::string org_str, std::string new_str)
{
	size_t		pos = 0;
	size_t		o_len = org_str.length();
	size_t		n_len = new_str.length();
	std::string lines;

	read_in(lines, inf);
	if (o_len == 0)
	{
		outf << lines;
		return ;
	}
	while ((pos = lines.find(org_str, pos)) != std::string::npos)
	{
		lines.erase(pos, o_len);
		lines.insert(pos, new_str);
		pos += n_len;
	}
	outf << lines;
}

int	main(int ac, char **av)
{
	std::ifstream	inf;
	std::ofstream	outf;
	std::string		org_str;
	std::string		new_str;

	if (ac != 4)
	{
		std::cout << "Invalid arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	org_str = av[2];
	new_str = av[3];
	if (!valid_check(inf, outf, av[1]))
	{
		std::cerr << "Opening file failed" << std::endl;
		return (EXIT_FAILURE);
	}
	search_and_replace(inf, outf, org_str, new_str);
	inf.close();
	outf.close();
	return (0);
}