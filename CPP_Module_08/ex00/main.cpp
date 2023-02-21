/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:04:02 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/21 21:21:46 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;

	for (int i = 1; i <= 30; i = i * 3)
		vec.push_back(i);

	std::cout << "Output with vec.begin() and vec.end(): ";
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;

	std::cout << "Output with vec.rbegin() and vec.rend(): ";
	for (std::vector<int>::reverse_iterator ir = vec.rbegin(); ir != vec.rend(); ir++)
		std::cout << *ir << " ";
	std::cout << std::endl;

	try
	{
		easyfind(vec, 7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(vec, 9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::deque<int> dq;

    dq.push_back(1);   // added element at the back
    dq.push_front(2);  // added element at the front
    dq.push_back(3);   // added element at the back
    dq.push_front(4);  // added element at the front

	std::deque<int>::iterator it;

	std::cout << "The deque dq is: ";
	for (it = dq.begin(); it != dq.end(); it++)
    {
        std::cout << *it << " ";
    }

    std::cout << "\ndq.size(): " << dq.size();

	// removing first element of deque
    dq.pop_front();
    std::cout << "\nDeque after using pop_front() is: ";
    for (it = dq.begin(); it != dq.end(); it++)
    {
        std::cout << *it << " ";
    }
	std::cout << std::endl;

	try
	{
		easyfind(dq, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(dq, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//// declaring an empty map container

	//std::map<int, char> m1;

	//std::map<int, char>::iterator itr;

	//// insert elements
    //m1.insert(std::pair<int, char>(1, 'c'));
    //m1.insert(std::pair<int, char>(3, 'u'));
    //m1.insert(std::pair<int, char>(4, 'n'));
    //m1.insert(std::pair<int, char>(5, 't'));
    //m1.insert(std::pair<int, char>(2, 'o'));

	//// printing map
    //std::cout << "The map m1 is: " << std::endl;

	//std::cout << "KEY  ->  VALUE" << std::endl;
    //for (itr = m1.begin(); itr != m1.end(); ++itr)
    //{
    //    std::cout << "  " << itr->first << "  ->  "<< itr->second << std::endl;
    //}

    //std::cout << std::endl;

	//// removeing the element with key = 4
    //m1.erase(4);
    //std::cout << "Map after executing m1.erase(4) is: " << std::endl;

	//std::cout << "KEY  ->  VALUE" << std::endl;
    //for (itr = m1.begin(); itr != m1.end(); ++itr)
    //{
    //    std::cout << "  " << itr->first << "  ->  "<< itr->second << std::endl;
    //}

	//try
	//{
	//	easyfind(m1, 5);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
	//try
	//{
	//	easyfind(m1, 3);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}


	return 0;
}
