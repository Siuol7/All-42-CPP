/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:51:37 by caonguye          #+#    #+#             */
/*   Updated: 2025/06/16 19:33:35 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

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

	ft_sound(d);
	ft_sound(e);
	c->makeSound();
	ft_del(c);
}