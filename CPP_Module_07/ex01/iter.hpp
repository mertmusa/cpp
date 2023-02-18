/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:53:53 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/18 23:33:01 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void a(T& a)
{
	a += 1;
}

template<typename T>
void f(T a)
{
	std::cout << a << " ";
}

template<typename T>
void iter(T* array, int size_arr, void f(T&))
{
	for(int i = 0; i < size_arr; i++)
	{
		f(array[i]);
	}
}
