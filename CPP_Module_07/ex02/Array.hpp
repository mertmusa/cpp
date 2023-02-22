/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:45:05 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 10:15:12 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array{
	private:
		int size;
		T* data;
	public:
		Array() : size(0), data(new T[0]) {}
		Array(unsigned int n) : size(n) , data(new T[n]) {}
		Array (const Array& acopy)
		{
			*this = acopy;
		}
		Array operator = (Array const)
		{
			return *this;
		}
		T operator[](int index)
		{
			if (index >= 0 && index < size)
				return (data[index]);
			else
				throw OutOfBound();
		}
		~Array()
		{
			delete[] data;
		}
		class OutOfBound : public std::exception{
			public:
				virtual const char* what() const throw() {
					return ("\033[1;31mIndex is out of bound!\033[0m");
				}
		};
};

#endif