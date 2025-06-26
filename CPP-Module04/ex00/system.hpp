/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:57:49 by siuol             #+#    #+#             */
/*   Updated: 2025/06/26 23:58:17 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define LOG_GREEN(msg) std::cout << "\033[32m" << msg << "\033[0m" << std::endl
#define LOG_RED(msg)   std::cout << "\033[31m" << msg << "\033[0m" << std::endl