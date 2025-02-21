/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:47:11 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/21 16:33:44 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Phonebook.hpp>

Contact::Contact(){};

Contact::~Contact(){};

Contact::Contact( std::string firstname,
					std::string	lastname,
					std::string	nickname,
					std::string	phone_number,
					std::string	darkest_secret)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

