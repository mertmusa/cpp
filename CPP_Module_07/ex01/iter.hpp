/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:53:53 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 10:13:19 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

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
void iter(T* array, int size_arr, void (*f)(T&))
{
	for(int i = 0; i < size_arr; i++)
	{
		f(array[i]);
	}
}

#endif