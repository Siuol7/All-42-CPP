/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:09:03 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 21:45:17 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	crossVproduct(const Point& p1, const Point& p2, const Point& p3)
{
	return
	(
		(p1.get_x().toFloat() - p3.get_x().toFloat()) * (p2.get_y().toFloat() - p3.get_y().toFloat())
		- (p2.get_x().toFloat() - p3.get_x().toFloat()) * (p1.get_y().toFloat() - p3.get_y().toFloat())
	);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	side1 = crossVproduct(point, a, b) < 0.0f;
	bool	side2 = crossVproduct(point, b, c) < 0.0f;
	bool	side3 = crossVproduct(point, c, a) < 0.0f;

	return (side1 == side2 && side2 == side3);
}