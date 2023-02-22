/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:33:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 13:40:37 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    //Span s(10);

	//try
	//{
	//	for (int i = 0; i < 10000; ++i) {
	//	s.addNumber(i);
    //}
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}

    //std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
    //std::cout << "Longest span: " << s.longestSpan() << std::endl;

	Span sp(10);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumbers(5, 4);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
