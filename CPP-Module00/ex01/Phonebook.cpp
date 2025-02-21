/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:36:03 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/21 18:24:13 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Phonebook.hpp>

Phonebook::Phonebook(){};

Phonebook::~Phonebook(){};

std::string	input(std::string noti)
{
	std::string	info = "";
	if (std::cin.eof())
		return (info);
	std::cout << noti << std::endl;
	std::getline(std::cin, info);
	return (info);
}

