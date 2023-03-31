/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 02:35:47 by mtemel            #+#    #+#             */
/*   Updated: 2023/03/31 16:49:23 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& copy)
{
	*this = copy;
}

RPN RPN::operator = (RPN const&)
{
	return (*this);
}

void RPN::calculate(char *rpnot)
{
	if(!rpnot || !strchr(rpnot, ' ') || (!strchr(rpnot, '+') && !strchr(rpnot, '-') && !strchr(rpnot, '/') && !strchr(rpnot, '*')))
	{
		std::cout << "Error!" << std::endl;
		return;
	}

	char *ptr = strtok(rpnot, " ");

	int temp = 0;
	int second = 0;
	int i = 0;
	while (ptr)
	{
		if (isdigit(*ptr) && strlen(ptr) == 1 && ( i == 0 || i % 2 != 0))
		{
			if (i == 0)
				this->numb.push(atoi(ptr));
			else
				second = atoi(ptr);
		}
		else if (strlen(ptr) == 1 && i % 2 == 0 && strchr("+-/*", ptr[0]))
		{
			if(ptr[0] == '+')
				temp = numb.top() + second;
			else if(ptr[0] == '-')
				temp = numb.top() - second;
			else if(ptr[0] == '/')
			{
				if (second != 0)
					temp = numb.top() / second;
				else
				{
					std::cout << "Error!" << std::endl;
					return;
				}
			}
			else if(ptr[0] == '*')
				temp = numb.top() * second;;
			numb.push(temp);
			//std::cout << this->numb.top() << std::endl;
		}
		else
		{
			std::cout << "Error!" << std::endl;
			return;
		}
		ptr = strtok(NULL, " ");
		i++;
	}

	// for (std::deque<int>::iterator it = numb.begin(); it != numb.end(); it++)
	// {
	// 	std::cout << "numb: " << *it << std::endl;
	// }
	
	// for (std::vector<char>::iterator it = token.begin(); it != token.end(); it++)
	// {
	// 	std::cout << "token: " << *it << std::endl;
	// }

	std::cout << this->numb.top() << std::endl;
}