/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:15:42 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/05 18:13:40 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

 #define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		void	add();
		void	search() const;

		~PhoneBook();

	private:
		Contact _list[8];
		int	_id;
		int	_qtt;

};

std::string	input(std::string noti);

#endif