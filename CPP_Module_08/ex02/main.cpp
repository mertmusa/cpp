/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:44:37 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/22 17:12:22 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	std::cout << "after +; " << *it << std::endl;
	--it;
	std::cout << "after -; " << *it << std::endl;

	std::cout << "----------------------" << std::endl;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "----------------------" << std::endl;

	std::stack<int> s(mstack);
	//MutantStack<int> s(mstack);
	//MutantStack<int>::iterator its = s.container().begin();
	//MutantStack<int>::iterator ites = s.container().end();
	//std::stack<int>::container_type::iterator its = s.begin();
	//std::stack<int>::container_type::iterator ites = s.end();
	//while (its != ites)
	//{
	//	std::cout << *its << std::endl;
	//	++its;
	//}
	

	//std::stack<int> s(mstack); how can we have begin and end for s class

	//in std=c++98 orthodox canonical form: To repair this injustice, you have to make the std::stack container iterable. Write a MutantStack class. It will be implemented in terms of a std::stack. It will offer all its member functions, plus an additional feature: iterators.

	return 0;
}