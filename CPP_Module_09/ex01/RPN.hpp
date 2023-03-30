/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:35:59 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/30 03:51:33 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <stdlib.h>
// #include <vector>
#include <deque>

class RPN
{
	private:
		std::deque<int> numb;
		// std::vector<char> token;
	public:
		RPN();
		RPN(const RPN& copy);
		RPN operator = (const RPN& copy);
		~RPN();
		void calculate(char *rpnot);
};
