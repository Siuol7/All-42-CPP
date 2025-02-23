/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:15:42 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/23 17:14:29 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

 #define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class	Phonebook
{
	public:
		Phonebook();

		void	add();
		void	search() const;

		~Phonebook();

	private:
		Contact _list[8];
		int	_id;
		int	_qtt;

};

std::string	input(std::string noti);

#endif