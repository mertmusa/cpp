/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:44:37 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/23 12:13:07 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <list>

int main()
{
	std::cout << "--------stack---------" << std::endl;

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
	std::cout << "after +: " << *it << std::endl;
	--it;
	std::cout << "after -: " << *it << std::endl;

	std::cout << "----------------------" << std::endl;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << "----------------------" << std::endl;

	/*std::cout << "---------list---------" << std::endl;

	std::list<int> mstack;
	
	mstack.push_back(5);
	mstack.push_back(17);
	
	std::cout << "top: " << mstack.back() << std::endl;
	
	mstack.pop_back();
	
	std::cout << "size: " << mstack.size() << std::endl;
	
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);
	
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	
	++it;
	std::cout << "after +: " << *it << std::endl;
	--it;
	std::cout << "after -: " << *it << std::endl;

	std::cout << "----------------------" << std::endl;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::list<int> s(mstack);

	std::cout << "----------------------" << std::endl;*/

	return 0;
}