/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:48:32 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/18 23:35:02 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int intarray[] = {1, 2, 3, 4, 5};
	int intsize_arr = sizeof(intarray) / sizeof(int);
	std::cout << "Array type: \033[1;33mint\033[0m, array size: " << intsize_arr << ", increment function output: ";
	iter(intarray, intsize_arr, a);
	iter(intarray, intsize_arr, f);
	std::cout << std::endl;

	char chararray[] = {'k', 'c', 'a'};
	int charsize_arr = sizeof(chararray) / sizeof(char);
	std::cout << "Array type: \033[1;33mchar\033[0m, array size: " << charsize_arr << ", print function output: ";
	iter(chararray, charsize_arr, f);
	std::cout << std::endl;

	std::string stringarray[] = {"ilk", "iki", "üç", "son"};
	int stringsize_arr = sizeof(stringarray) / sizeof(std::string);
	std::cout << "Array type: \033[1;33mstring\033[0m, array size: " << stringsize_arr << ", print function output: ";
	iter(stringarray, stringsize_arr, f);
	std::cout << std::endl;

	return 0;
}
