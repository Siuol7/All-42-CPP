/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:47:11 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/23 17:14:29 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact(){};

Contact::~Contact(){};

Contact::Contact( int	id,
					std::string firstname,
					std::string	lastname,
					std::string	nickname,
					std::string	phone_number,
					std::string	darkest_secret)
{
	this->_id = id;
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}

std::string	ft_truncate(std::string info)
{
	return (info.length() > 10) ? (info.substr(0, 9) + '.') : info;
}

void	Contact::display_title() const
{
	std::cout << std::setfill('_') << std::setw(50);
	std::cout << std::setw(10) << "id" << '|';
	std::cout << std::setw(10) << "Firstname" << '|';
	std::cout << std::setw(10) << "Lastname" << '|';
	std::cout << std::setw(10) << "Nickname" << '|';
	std::cout << std::setw(10) << "Phone.No" << '|';
	std::cout << std::setw(10) << "Darkestsec" << std::endl;
}

void	Contact::display_minibook() const
{
	std::cout << std::setw(10) << _id << '|';
	std::cout << std::setw(10) << ft_truncate(_firstname) << '|';
	std::cout << std::setw(10) << ft_truncate(_lastname) << '|';
	std::cout << std::setw(10) << ft_truncate(_nickname) << '|';
	std::cout << std::setw(10) << ft_truncate(_phone_number) << '|';
	std::cout << std::setw(10) << ft_truncate(_darkest_secret) << std::endl;
}

void	Contact::display_contact() const
{
	std::cout << "Person id" << _id << "information :" << std::endl;
	std::cout << "First name is : " << _firstname << std::endl;
	std::cout << "Last name is : " << _lastname << std::endl;
	std::cout << "Nickname is : " << _nickname << std::endl;
	std::cout << "Darkest secret is : " << _darkest_secret << std::endl;
}