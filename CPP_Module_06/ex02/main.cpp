/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:06:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/18 18:51:50 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base* pbase = generate();

	identify(pbase);

	A a;
	B b;
	C c;

	Base& ra = a;
	Base& rb = b;
	Base& rc = c;

	if((long)pbase % 3 == 0)
		identify(ra);
	else if((long)pbase % 3 == 1)
		identify(rb);
	else
		identify(rc);

	delete pbase;
}
