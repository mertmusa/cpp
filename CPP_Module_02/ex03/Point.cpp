/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:45:00 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/02 21:10:27 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Point.hpp"

Point::Point(void) : x(0),y(0)
{
	//this->x(0);
	//this->y(0);
}

Point::Point(float const xf, float const yf): x(xf),y(yf)
{
	//this->x(xf);
	//this->y(yf);
}

Point::Point(const Point& pcopy): x(pcopy.x),y(pcopy.y)
{
	//x(pcopy.x);
	//y(pcopy.y);
}

Point& Point::operator = (Point& pcopy)
{
	//new (this) Point(pcopy.getx().toFloat(),pcopy.gety().toFloat());
	//return *this;
	return (pcopy);
}

Point::~Point(void)
{
	//std::cout<<"Point destructor called"<<std::endl;
}

Fixed Point::getx(void) const
{
	return (this->x);
}

Fixed Point::gety(void) const
{
	return (this->y);
}

#endif
