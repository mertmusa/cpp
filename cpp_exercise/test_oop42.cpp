/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_oop42.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:22:27 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/20 20:15:56 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*class MyClass{
	private:
		int deger;
	public:
	MyClass(int deger);
	MyClass(){
		deger = 10;
		std::cout<<"MyClass constructor " << deger << std::endl;
	}
	//MyClass(int deger)
	//{
		//this->deger = deger;
		//std::cout<<"MyClass constructor " << deger << std::endl;
	//}
	~MyClass()
	{
		std::cout << "dead" << std::endl;
	}
};

MyClass::MyClass(int deger)
	{
		this->deger = deger;
		std::cout<<"MyClass constructor " << deger << std::endl;
	}

int	main()
{
	{
		MyClass *myObj = new MyClass;
		delete myObj;
	}
	std::cout << "hmm" << std::endl;
	
}*/

class MyClass {
	public:    // Public access specifier
		int x;   // Public attribute
	private:   // Private access specifier
		//int y;   // Private attribute
};

int main() {
	MyClass myObj;
	myObj.x = 25;  // Allowed (public)
	//myObj.y = 50;  // Not allowed (private)
	return 0;
}