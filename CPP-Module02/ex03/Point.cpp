/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:45:24 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 15:56:42 by caonguye         ###   ########.fr       */
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
		this->_x = other.getx();
		this->_y = other.gety();
	}
	return *this;
}

Fixed	Point::getx(void) const {return _x;}

Fixed	Point::gety(void) const {return _y;}
