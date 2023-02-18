/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:01:52 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/18 18:24:46 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{

	Base* a = new A();
	Base* b = new B();
	Base* c = new C();

	//A* ap = dynamic_cast<A*>(a);
	//B* bp = dynamic_cast<B*>(b);
	//C* cp = dynamic_cast<C*>(c);

	srand(time(NULL));
	int num = rand();

	//std::cout<<__LINE__<<std::endl;

	if(num % 3 == 0)
	{
		//delete a;
		delete b;
		delete c;
		return (a);
	}
	else if (num % 3 == 1)
	{
		delete a;
		//delete b;
		delete c;
		return (b);
	}
	//else if (num % 3 == 2)
	//{
		delete a;
		delete b;
		//delete c;
	//}
	return (c);

}

void identify(Base* p)
{
	try
	{
		if (dynamic_cast<A*>(p) != NULL)
			std::cout << std::setw(20) << std::left << "Pointer identifier" << ": A " << p << std::endl;
		else if (dynamic_cast<B*>(p))
			std::cout << std::setw(20) << std::left << "Pointer identifier" << ": B " << p << std::endl;
		else if (dynamic_cast<C*>(p))
			std::cout << std::setw(20) << std::left << "Pointer identifier" << ": C " << p << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void identify(Base& p)
{
	try
	{
		A& aRef = dynamic_cast<A&>(p);
		aRef.sayRef();
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}

	try
	{
		B& bRef = dynamic_cast<B&>(p);
		bRef.sayRef();
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}

	try
	{
		C& cRef = dynamic_cast<C&>(p);
		cRef.sayRef();
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
}
