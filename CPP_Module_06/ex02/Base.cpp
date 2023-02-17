/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:01:52 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/18 00:19:39 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	//Base* a = new A();
	//Base* b = new B();
	//Base* c = new C();

	A* a = new A;
	B* b = new B;
	C* c = new C;

	//A* ap = dynamic_cast<A*>(a);
	//B* bp = dynamic_cast<B*>(b);
	//C* cp = dynamic_cast<C*>(c);

	srand(time(NULL));
	int num = rand();

	if(num % 3 == 0)
	{
		//delete a;
		//delete b;
		//delete c;
		return (a);
	}
	else if (num % 3 == 1)
	{
		//delete a;
		//delete b;
		//delete c;
		return (b);
	}
	//else if (num % 3 == 2)
	//{
		//delete a;
		//delete b;
		//delete c;
	//}
	return (c);

}

static Base & r_generate(void)
{
	A a;
	B b;
	C c;

	A& ra = a;
	B& rb = b;
	C& rc = c;

	srand(time(NULL));
	int num = rand();

	if(num % 3 == 0)
	{
		return (ra);
	}
	else if (num % 3 == 1)
	{
		return (rb);
	}
	return (rc);
}

void identify(Base* p)
{
	p = generate();

	try
	{
		if (dynamic_cast<A*>(p))
			std::cout << std::setw(20) << std::left << "Pointer identifier" << ": A " << p << std::endl;
		if (dynamic_cast<B*>(p))
			std::cout << std::setw(20) << std::left << "Pointer identifier" << ": B " << p << std::endl;
		if (dynamic_cast<C*>(p))
			std::cout << std::setw(20) << std::left << "Pointer identifier" << ": C " << p << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void identify(Base& p)
{
	p = r_generate();

	try
	{
		Base r = dynamic_cast<A&>(p);
		std::cout << std::setw(20) << std::left << "Reference identifier" << ": A" << &r << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		B& r =	dynamic_cast<B&>(p);
		std::cout << std::setw(20) << std::left << "Reference identifier" << ": B" << &r << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		C& r =	dynamic_cast<C&>(p);
		std::cout << std::setw(20) << std::left << "Reference identifier" << ": C" << &r << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
