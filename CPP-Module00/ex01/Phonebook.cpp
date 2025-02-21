/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:36:03 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/21 18:54:43 by caonguye         ###   ########.fr       */
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

void	add()
{
	std::string firstname = input("First name is: ");
	std::string lastname = input("Last name is: ");
	std::string nickname = input("Nickname is: ");
	std::string phone_number = input("Phone number is: ");
	std::string darkest_secret = input("Darkest secret is: ");
	

}