/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:58:44 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/02 23:32:04 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*Fixed my_fabs(Fixed fx)
{
	//std::cout<<"before translation abs: "<<fx<<std::endl;
	if (fx >= 0)
		return (fx);
	return (fx * Fixed(-1));
}*/

Fixed get_w1(Point const a, Point const b, Point const c, Point const point)
{
	Fixed x1 = a.getx();
	Fixed y1 = a.gety();
	Fixed x2 = b.getx();
	Fixed y2 = b.gety();
	Fixed x3 = c.getx();
	Fixed y3 = c.gety();
	Fixed xp = point.getx();
	Fixed yp = point.gety();

	Fixed up = (x1 * (y3 - y1)) + ((yp - y1) * (x3 - x1)) - (xp * (y3 - y1));
	Fixed down = ((y2 - y1) * (x3 - x1)) - ((x2 - x1) * (y3 - y1));

	Fixed w1 = up / down;

	/*std::cout<<"--w1--"<<std::endl;
	std::cout<<"up  : "<<up<<std::endl;
	std::cout<<"down: "<<down<<std::endl;
	std::cout<<"w1  : "<<w1<<std::endl;*/

	return (w1);
}

Fixed get_w2(Fixed w1, Point const a, Point const b, Point const c, Point const point)
{
	Fixed x1 = a.getx();
	Fixed y1 = a.gety();
	Fixed x2 = b.getx();
	Fixed y2 = b.gety();
	Fixed x3 = c.getx();
	Fixed y3 = c.gety();
	Fixed xp = point.getx();
	Fixed yp = point.gety();

	Fixed up = (yp - y1 - (w1 * (y2 - y1)));
	Fixed down = y3 - y1;

	Fixed w2 = up / down;

	/*std::cout<<"--w2--"<<std::endl;
	std::cout<<"up  : "<<up<<std::endl;
	std::cout<<"down: "<<down<<std::endl;
	std::cout<<"w2  : "<<w2<<std::endl;*/

	return (w2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed x1 = a.getx();
	Fixed y1 = a.gety();
	Fixed x2 = b.getx();
	Fixed y2 = b.gety();
	Fixed x3 = c.getx();
	Fixed y3 = c.gety();
	Fixed xp = point.getx();
	Fixed yp = point.gety();

		if ((x1 == xp && y1 == yp) || (x2 == xp && y2 == yp) || (x3 == xp && y3 == yp))//vertex
	{
		std::cout<<"On vertex!"<<std::endl;
		return (false);
	}
	else if (((y2 - y1) / (x2 - x1)) == ((yp - y1) / (xp - x1)) || ((y2 - y3) / (x2 - x3)) == ((yp - y3) / (xp - x3)) || ((y3 - y1) / (x3 - x1)) == ((yp - y1) / (xp - x1)))//edge
	{
		std::cout<<"On edge!"<<std::endl;
		return (false);
	}

	/*std::cout.precision(8);

	Fixed areatri = my_fabs((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2;
	std::cout<<std::fixed<<"triangle area: "<<areatri<<std::endl;

	Fixed areap1 = my_fabs((xp * (y2 - y3)) + (x2 * (y3 - yp)) + (x3 * (yp - y2))) / 2;
	std::cout<<"p1: "<<areap1<<std::endl;
	Fixed areap2 = my_fabs((xp * (y3 - y1)) + (x1 * (yp - y3)) + (x3 * (y1 - yp))) / 2;
	std::cout<<"p2: "<<areap2<<std::endl;
	Fixed areap3 = my_fabs((xp * (y1 - y2)) + (x2 * (yp - y1)) + (x1 * (y2 - yp))) / 2;
	std::cout<<"p3: "<<areap3<<std::endl;

	Fixed areatotal = areap1 + areap2 + areap3;
	std::cout<<"calculated area: "<<areatotal<<std::endl;

	if (areatotal > areatri)
	{
		std::cout<<"Outside!"<<std::endl;
		return (false);
	}
	return (true);*/

	Fixed w1 = get_w1(a, b, c, point);
	Fixed w2 = get_w2(w1, a, b, c, point);

	/*std::cout<<"\033[1;37mw1     : "<<w1<<std::endl;
	std::cout<<"w2     : "<<w2<<std::endl;
	std::cout<<"w1 + w2: \033[0m"<<w1 + w2<<std::endl;*/

	if (w1 < 0 || w2 < 0)
		return (false);
	else if ((w1 + w2) > 1)
		return (false);
	return (true);
}
