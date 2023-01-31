/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:16:55 by mtemel            #+#    #+#             */
/*   Updated: 2023/01/31 19:38:35 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->FixedVal);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout<<"setRawBits member function called"<<std::endl;
	this->FixedVal = raw;
}

Fixed::Fixed(void)
{
	std::cout<<"Default constructor called"<<std::endl;
	this->FixedVal = 0;
}

Fixed::Fixed(const Fixed& mfcopy)
{
	std::cout<<"Copy constructor called"<<std::endl;
	//this->FixedVal = mfcopy.FixedVal;
	*this = mfcopy;
}

Fixed& Fixed::operator = (const Fixed& mfcopy)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	setRawBits(mfcopy.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}
