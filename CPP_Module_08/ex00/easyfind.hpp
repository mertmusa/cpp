/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:00:54 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/21 20:56:58 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <algorithm>
#include <iterator>
#include <exception>

#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

class NotFound : public std::exception{
	public:
		virtual const char* what() const throw() {
			return ("\033[1;31mContainer doesn't contain the given number!\033[0m");
		}
};

template<typename T>
typename T::iterator easyfind(T container, int needle)
{
	typename T::iterator it = std::find(container.begin(), container.end(), needle);
	if (it == container.end())
		throw NotFound();
	std::cout << "\033[1;36mThe integer:" << needle << " found in the container!\033[0m" << std::endl;
	return (it);

	//int hay_size = sizeof(haystack) / sizeof(int);
	//int i = 0;
	//while (i < hay_size)
	//{
	//	if (haystack[i] == needle)
	//		return(haystack[i]);
	//	 i++;
	//}
	//if (i >= hay_size)
	//{
	//	throw NotFound();
	//}
}
