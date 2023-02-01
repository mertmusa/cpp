/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:16:55 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/01 15:04:30 by mtemel           ###   ########.fr       */
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

float	Fixed::toFlaot(void)
{
	return (roundf((float)(this->fixedval) / (float)(1 << this->fixfrac)));
}

int	Fixed::toInt(void)
{
	return (fixedval / 1<<fixfrac);
}

Fixed::Fixed(void)
{
	std::cout<<"Default constructor called"<<std::endl;
	this->FixedVal = 0;
}

Fixed::Fixed(const int conint)
{
	std::cout<<"Int constructor called"<<std::endl;
	this->fixedval = conint * (1 << this->fixfrac);
}

Fixed::Fixed(const float conflo)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->fixedval = roundf(conflo * (1 << this->fixfrac));
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

std::ostream& Fixed::operator<<(std::ostream& o, const Fixed& mfcopy)
{
	//std::cout<<"Copy assignment operator called"<<std::endl;
	//mfcopy.toFlaot();
	o << Fixed.toFloat();
	return (o);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}
