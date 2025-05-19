/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:01:06 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 21:03:00 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class	Point
{
	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(const Point& other);
		Point& operator=(const Point& other);
		Fixed get_x(void) const;
		Fixed get_y(void) const;

	private:
		Fixed	_x;
		Fixed	_y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);