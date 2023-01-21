/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:25:48 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/20 00:47:56 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*class MyClass
{
	public:
		void	myMethod()
		{
			std::cout<<"Method works!"<<std::endl;
		}
};
*/

class MyClass
{
	public:
		void	myMethod();
};

void	MyClass::myMethod()
{
	std::cout<<"Method works!"<<std::endl;
}

int	main()
{
	MyClass myObj;
	myObj.myMethod();
}
