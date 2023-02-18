/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:51:37 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/18 17:35:21 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base
{
	public:
		void sayRef() {std::cout << "This is the class A!" << std::endl;}
};

class B : public Base
{
	public:
		void sayRef() {std::cout << "This is the class B!" << std::endl;}
};

class C : public Base
{
	public:
		void sayRef() {std::cout << "This is the class C!" << std::endl;}
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);
