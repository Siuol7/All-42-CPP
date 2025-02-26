/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 02:09:28 by caonguye          #+#    #+#             */
/*   Updated: 2025/02/26 02:57:23 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

 #define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		void	announce();
		void	create(std::string name);
		~Zombie();
	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif