/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:34:13 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/23 17:14:29 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main()
{
	Phonebook book = Phonebook                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ();
	std::string command;

	while (!std::cin.eof())
	{
		command = input("Would you like to (ADD/SEARCH/EXIT) ?");
		if (!command.compare("ADD"))	book.add();
		else if (!command.compare("SEARCH"))	book.search();
		else if (!command.compare("EXIT"))	break;
	}
	return (0);
}
