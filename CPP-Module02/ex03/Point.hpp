/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:01:06 by caonguye          #+#    #+#             */
/*   Updated: 2025/05/19 15:08:22 by caonguye         ###   ########.fr       */
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

	private:
		Fixed&	x;
		Fixed&	y;
};