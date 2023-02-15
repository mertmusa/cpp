/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:48:32 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/15 17:27:00 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	std::cout << "\033[1;32mMAIN STARTED\033[0m" << std::endl;
	ScalarConverter sc;
	if(argc == 2 && argv[1][0])
	{
		sc.convert(argv[1]);
	}
	else
		std::cout << "Bad argument!" << std::endl;


	std::cout << "\033[1;32mMAIN ENDED\033[0m" << std::endl;
}
