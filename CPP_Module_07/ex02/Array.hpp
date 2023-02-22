/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:45:05 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 11:49:22 by mtemel           ###   ########.fr       */
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
		Array() : size(0), data(new T()) {}
		Array(unsigned int n) : size(n) , data(new T[n]) {}
		Array(const Array& acopy) : size(acopy.size), data(new T[acopy.size])
		{
			for (int i = 0; i < size ; i++)
				data[i] = acopy.data[i];
			//*this = acopy; //seg fault
		}
		Array& operator = (const Array& acopy)
		{
			if (this != &acopy)
			{
				Array temp(acopy);
				swap(temp);
				//std::swap(size, acopy.size);
				//std::swap(data, acopy.data);
			}
			return *this;
		}
		T& operator[](int index)
		{
			if (index >= 0 && index < this->size)
				return (data[index]);
			throw OutOfBound();
		}
		const T& operator[](int index) const
		{
			if (index >= 0 && index < this->size)
				return (data[index]);
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
		void swap(Array& other)
		{
			std::swap(size, other.size);
			std::swap(data, other.data);
		}
};

#endif