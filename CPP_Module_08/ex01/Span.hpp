/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 22:41:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 13:37:04 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
	private:
		unsigned int N; // Maximum number of integers
		std::vector<int> data; // Vector to store the integers
	public:
		Span(unsigned int n) : N(n) {}
		Span(const Span& bcopy);
		Span& operator = (const Span& bcopy);
		~Span() {}

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		void addNumbers(int count, int num);
		void addNumbers(int count);
};
