/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:58:44 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/02 01:39:44 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float my_fabs(float fl)
{
	if (fl >= 0)
		return (fl);
	return (fl * float(-1));
}

/*bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float area;

	area = my_fabs()
}
*/
