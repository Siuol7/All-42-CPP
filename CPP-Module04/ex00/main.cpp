/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siuol <siuol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:51:37 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/19 13:42:13 by siuol            ###   ########.fr       */
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

int	main(void)
{
	Animal a = Animal();
	Animal *c = new Cat();
	Dog d;
	Dog e(d);
	WrongAnimal *wc = new WrongCat();
	
	ft_sound(d);
	ft_sound(e);
	c->makeSound();
	ft_del(c);
	wc->makeSound();
	delete wc;
}