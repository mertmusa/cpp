/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:00:54 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/20 23:21:22 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class NotFound : public std::exception{
	public:
		virtual const char* what() const throw() {
			return ("\033[1;31mContainer doesn't contain the given number!\033[0m");
		}
};

template<typename T>
easyfind(T haystack, int needle)
{
	//find needle in haystack
	//if there is none, throw an exception or error value
	int hay_size = sizeof(haystack) / sizeof(int);
	int i = 0;
	while (i < hay_size)
	{
		if (haystack[i] == needle)
			return(haystack[i]);
		 i++;
	}
	if (i >= hay_size)
	{
		throw NotFound();
	}
}
