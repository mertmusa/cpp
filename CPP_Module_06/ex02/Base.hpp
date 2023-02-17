/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:51:37 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/17 21:23:19 by mtemel           ###   ########.fr       */
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
{};

class B : public Base
{};

class C : public Base
{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
