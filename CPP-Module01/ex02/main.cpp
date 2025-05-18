/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:54:10 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/18 16:49:20 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	const std::string	string = "HI THIS IS BRAIN";
	const std::string*	stringPTR = &string;
	const std::string&	stringREF = string;

	std::cout << "Address of string : " << &string << std::endl;
	std::cout << "Address of pointer : " << stringPTR << std::endl;
	std::cout << "Address of reference : " << &stringREF << std::endl;

	std::cout << "Value of string : " << string << std::endl;
	std::cout << "Value of pointer : " << *stringPTR << std::endl;
	std::cout << "Value of reference : " << stringREF << std::endl;
	return (0);
}