/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:06:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/18 18:24:18 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base* pbase = generate();

	identify(pbase);

	delete pbase;

	if((long)pbase % 3 == 0)
	{
		A a;
		Base& rbase = a;
		identify(rbase);
	}
	else if((long)pbase % 3 == 1)
	{
		B b;
		Base& rbase = b;
		identify(rbase);
	}
	else
	{
		C c;
		Base& rbase = c;
		identify(rbase);
	}

}
