/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   #include "Zombie.hpp"pombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:24:18 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/25 14:24:19 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP

 #define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();

		Zombie(std::string name);
		void	announce(void);

		~Zombie();

	private:
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif