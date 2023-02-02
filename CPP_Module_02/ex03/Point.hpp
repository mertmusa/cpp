/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:39:38 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/02 21:09:18 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(float const xf, float const yf);
		Point(const Point& pcopy);
		Point& operator = (Point& pcopy);
		~Point(void);
		Fixed getx(void) const;
		Fixed gety(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
