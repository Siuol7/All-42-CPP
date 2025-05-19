/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:22:24 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 21:18:42 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void check(const bool flag)
{
	std::cout << (flag ? "INSIDE" : "OUTSIDE") << std::endl;
}

int	main(void)
{
	Point	a(1 , 2);
	Point	b(2 , 5);
	Point	c(4 , 2);
	Point	point(3 , 3);

	check(bsp(a, b, c, point));
}