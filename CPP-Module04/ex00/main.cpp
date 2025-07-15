/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:51:37 by caonguye          #+#    #+#             */
/*   Updated: 2025/07/15 21:52:02 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void	ft_del(Animal *target)
{
	delete target;
}

static void	ft_sound(Animal& target)
{
	target.makeSound();
}

Animal *c = nullptr;
WrongAnimal *wc = nullptr;

int	main(void)
{
	try
	{
		Animal a = Animal();
		c = new Cat();
		//throw std::runtime_error("TEST SUDDEN THROW");
		Dog d;
		Dog e(d);
		wc = new WrongCat();
		
		ft_sound(d);
		ft_sound(e);
		c->makeSound();
		ft_del(c);
		wc->makeSound();
		delete wc;
	}
	catch(std::exception& e)
	{
		LOG_RED(e.what());
		delete wc;
		delete c;
	}
}