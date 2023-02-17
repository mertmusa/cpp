/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:06:33 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/17 21:29:12 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base* pbase = generate();
	Base base;
	Base& rbase = base;

	identify(pbase);
	identify(rbase);
}
