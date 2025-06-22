/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:51:37 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/22 19:52:25 by siuol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	ft_clean(Animal** arr, int lim)
{
	for (int i = 0; i < lim; i++)
		delete arr[i];
}

int	main(void)
{
	int ac = 10;
	
	std::cout << "Array of Animal" << std::endl;
	Animal* arr[ac];
	std::cout << std::endl;

	std::cout << "Dog generated" << std::endl;
	for (int i = 0; i < ac / 2; i++)
	{
		try
		{
			std::cout << "Time " << i << ": ";
			arr[i] = new Dog();
			arr[i]->makeSound();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << "Bad alloc" << std::endl;
			ft_clean(arr, i);
			return (1);
		}
	}
	std::cout << std::endl;

	std::cout << "Cat generated" << std::endl;
	for (int i = ac / 2; i < ac; i++)
	{
		try
		{
			std::cout << "Time " << i << ": ";
			arr[i] = new Cat();
			arr[i]->makeSound();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << "Bad alloc" << std::endl;
			ft_clean(arr, i);
			return (1);
		}
	}
	
	std::cout << std::endl;

	ft_clean(arr, ac);
	return (0);	
}