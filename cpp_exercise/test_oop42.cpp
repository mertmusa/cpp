/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_oop42.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:22:27 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/20 19:49:22 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MyClass{
	private:
		int deger;
	public:
	MyClass(){
		deger = 10;
		std::cout<<"MyClass constructor " << deger << std::endl;
	}
	MyClass(int deger)
	{
		this->deger = deger;
		std::cout<<"MyClass constructor " << deger << std::endl;
	}
	~MyClass()
	{
		std::cout << "dead" << std::endl;
	}
};

int	main()
{
	{
		MyClass *myObj = new MyClass;
		delete myObj;
	}
	std::cout << "hmm" << std::endl;
	
}