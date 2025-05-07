/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:59:07 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/07 09:57:12 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl
{
	public:
		void	complain(std::string level);
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};