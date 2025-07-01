/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:04:17 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/01 10:55:43 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScravTrap.hpp"

class DiamondTrap : public FragTrap, public ScravTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);

		void	whoAmI() const;
		
	private:
		std::string	_name;
};
