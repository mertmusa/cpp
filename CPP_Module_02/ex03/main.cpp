/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:15:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/02 23:33:22 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(0, 8.87);
	Point b(2.48, 0);
	Point c(11.38, 0);

	Point p1(5.99, 4.2);
	Point p2(3.75, 2.99);
	//Point p2(2, 4);
	Point p3(8.64, 5.08);
	Point p4(11.38, 0);

	if (bsp(a, b, c, p3))
		std::cout<<"\033[1;36mThe point is inside the triangle\033[0m"<<std::endl;
	else
		std::cout<<"\033[1;31mThe point is a vertex or on edge or outside the triangle\033[0m"<<std::endl;
	return (0);
}
