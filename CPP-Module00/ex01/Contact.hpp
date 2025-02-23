/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 13:15:48 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/23 10:00:01 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

 #define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class	Contact
{
	public:
		Contact();

		Contact(
			int					_id,
			const std::string	firstname,
			const std::string	lastname,
			const std::string	nickname,
			const std::string	phone_number,
			const std::string	darkest_secret);

		~Contact();

		void	display_title()	const;
		void	display_minibook() const;
		void	display_contact() const;

	private:
			int			_id;
			std::string	_firstname;
			std::string	_lastname;
			std::string	_nickname;
			std::string	_phone_number;
			std::string	_darkest_secret;

};

#endif