/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:15:42 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/21 17:44:10 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

 #define PHONEBOOK_HPP

#include <iostream>
#include <string>

class	Phonebook
{
	public:
		Phonebook();

		void	add();
		void	search() const;

		~Phonebook();

	private:
		std::string list[8];
		id_t		qtt;

};

std::string	input(std::string noti);

#endif;