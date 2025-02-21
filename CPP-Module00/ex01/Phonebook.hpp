/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:15:42 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/21 18:38:08 by caonguye         ###   ########.fr       */
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
		id_t	_qtt;

};

std::string	input(std::string noti);

#endif;