/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:36:03 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/23 17:14:29 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook() {
	_id = 0;
	_qtt = 0;
};

Phonebook::~Phonebook() {};

std::string	input(std::string noti)
{
	std::string	info = "";
	if (std::cin.eof())
		return (info);
	std::cout << noti << std::endl;
	std::getline(std::cin, info);
	return (info);
}

void	Phonebook::add()
{
	//Get input to create contact
	std::string firstname = input("First name is: ");
	std::string lastname = input("Last name is: ");
	std::string nickname = input("Nickname is: ");
	std::string phone_number = input("Phone number is: ");
	std::string darkest_secret = input("Darkest secret is: ");

	//Create contact instance -> add to phonebook
	Contact person(_id, firstname, lastname, nickname, phone_number, darkest_secret);
	_list[_id++ % 8] = person;
	_qtt += (_qtt == 8) ? 1 : 0;
}

void	Phonebook::search() const
{
	std::string	request;

	if (_qtt < 1)
		return;

	//Displaying mini phonebook
	for (int i = 0; i < _qtt; i++)
		_list[i].display_minibook();
	request = input("Search person at index : ");
	if (request.length() != 1 || request.at(0) - '0' + 1 > _qtt
		||request.at(0) < '0' || request.at(0) > '7')
	{
		std::cout << "Wrong input index" << std::endl;
		return;
	}
	//Displaying full information of input id
	_list[request.at(0) - '0'].display_contact();
}