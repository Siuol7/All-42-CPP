/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:45:24 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 16:58:14 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)){};

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)){};

Point::~Point(){};

Point::Point(const Point& other){*this = other;}

Point&	Point::operator=(const Point& other)
{
	if (this != &other)
	{
		this->_x = other.get_x();
		this->_y = other.get_y();
	}
	return *this;
}

Fixed	Point::get_x(void) const {return _x;}

Fixed	Point::get_y(void) const {return _y;}
