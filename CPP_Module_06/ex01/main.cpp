/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:48:49 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/20 16:13:13 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Serializer serikoz;
	Data *ptr = new Data;
	uintptr_t seriuint = serikoz.serialize(ptr);
	Data *newptr = serikoz.deserialize(seriuint);

	std::cout << std::setw(12) << std::left << "PTR" << ": " << ptr << std::endl;
	std::cout << std::setw(12) << std::left << "Serialize" << ": " << seriuint << std::endl;
	std::cout << std::setw(12) << std::left << "Deserialize" << ": " << newptr << std::endl;

	delete ptr;

	if (ptr == newptr)
		std::cout << "\033[1;36mYAYY! POINTERS ARE EQUAL!\033[0m" << std::endl;
	else
		std::cout << "\033[1;32mNO WAY! WHAT DID JUST HAPPENED!\033[0m" << std::endl;

	return (0);
}
