/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:47:11 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/22 16:04:56 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Phonebook.hpp>

Contact::Contact(){};

Contact::~Contact(){};

Contact::Contact( int	_id,
					std::string firstname,
					std::string	lastname,
					std::string	nickname,
					std::string	phone_number,
					std::string	darkest_secret)
{
	this->_id = _id;
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

