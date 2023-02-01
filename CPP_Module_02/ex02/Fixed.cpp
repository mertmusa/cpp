/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:16:55 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/02 00:33:46 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//ex00
int	Fixed::getRawBits(void) const
{
	//std::cout<<"getRawBits member function called"<<std::endl;
	return (this->fixedval);
}

//ex00
void	Fixed::setRawBits(int const raw)
{
	//std::cout<<"setRawBits member function called"<<std::endl;
	this->fixedval = raw;
}

//ex00
Fixed::Fixed(void)
{
	//std::cout<<"Default constructor called"<<std::endl;
	this->fixedval = 0;
}

//ex00
Fixed::Fixed(const Fixed& mfcopy)
{
	//std::cout<<"Copy constructor called"<<std::endl;
	//this->FixedVal = mfcopy.FixedVal;
	*this = mfcopy;
}

//ex00
Fixed& Fixed::operator = (const Fixed& mfcopy)
{
	//std::cout<<"Copy assignment operator called"<<std::endl;
	setRawBits(mfcopy.getRawBits());
	return (*this);
}

//ex00
Fixed::~Fixed()
{
	//std::cout<<"Destructor called"<<std::endl;
}

//ex00 -> ex01

//ex01
Fixed::Fixed(const int conint)
{
	//std::cout<<"Int constructor called"<<std::endl;
	//this->fixedval = conint * (1 << this->fixfrac);
	//setRawBits(conint << this->fixfrac);
	fixedval = (conint << this->fixfrac);
}

//ex01
Fixed::Fixed(const float conflo)
{
	//std::cout<<"Float constructor called"<<std::endl;
	//this->fixedval = roundf(conflo * (1 << this->fixfrac));
	//this->setRawBits((int)roundf(conflo * (1 << this->fixfrac)));
	//setRawBits((int)roundf(conflo * (1 << this->fixfrac)));
	//fixedval = (int)roundf(conflo * (1 << this->fixfrac));
	fixedval = roundf(conflo * (1 << this->fixfrac));
}

//ex01
float	Fixed::toFloat(void) const
{
	//return (roundf((float)(this->fixedval) / (float)(1 << this->fixfrac)));
	//return ((float)(this->getRawBits()) / (1 << this->fixfrac));
	return ((float)(fixedval) / (1 << fixfrac));
}

//ex01
int	Fixed::toInt(void) const
{
	//return (fixedval / 1<<fixfrac);
	//return (this->getRawBits() / (1 << this->fixfrac));
	//return (this->getRawBits() >> this->fixfrac);
	return (fixedval >> fixfrac);
}

//ex01
std::ostream& operator<<(std::ostream& ost, const Fixed& mfcopy)
{
	//std::cout<<"Copy assignment operator called"<<std::endl;
	//mfcopy.toFlaot();
	ost << mfcopy.toFloat();
	return (ost);
}

//ex01 -> ex02

//ex02
int Fixed::operator > (const Fixed& mfcopy) const
{
	//if(this->getRawBits() > mfcopy.getRawBits())
	if(this->fixedval > mfcopy.fixedval)
		return (1);
	return (0);
}

//ex02
int Fixed::operator < (const Fixed& mfcopy) const
{
	//if(this->getRawBits() < mfcopy.getRawBits())
	if(this->fixedval < mfcopy.fixedval)
		return (1);
	return (0);
}

//ex02
int Fixed::operator >= (const Fixed& mfcopy)
{
	if(this->fixedval >= mfcopy.fixedval)
		return (1);
	return (0);
}

//ex02
int Fixed::operator <= (const Fixed& mfcopy)
{
	if(this->fixedval <= mfcopy.fixedval)
		return (1);
	return (0);
}

//ex02
int Fixed::operator == (const Fixed& mfcopy)
{
	if(this->fixedval == mfcopy.fixedval)
		return (1);
	return (0);
}

//ex02
int Fixed::operator != (const Fixed& mfcopy)
{
	if(this->fixedval != mfcopy.fixedval)
		return (1);
	return (0);
}

//ex02
Fixed Fixed::operator + (const Fixed& mfcopy)
{
	//return(Fixed gg(this->toFloat() + mfcopy.toFloat()));
	Fixed gg(this->toFloat() + mfcopy.toFloat());
	return(gg);
}

//ex02
Fixed Fixed::operator - (const Fixed& mfcopy)
{
	//return(Fixed gg(this->toFloat() - mfcopy.toFloat()));
	Fixed gg(this->toFloat() - mfcopy.toFloat());
	return(gg);
}

//ex02
Fixed Fixed::operator * (const Fixed& mfcopy)
{
	//return(Fixed gg(this->toFloat() * mfcopy.toFloat()));
	Fixed gg(this->toFloat() * mfcopy.toFloat());
	return(gg);
}

//ex02
Fixed Fixed::operator / (const Fixed& mfcopy)
{
	//return(Fixed gg(this->toFloat() / mfcopy.toFloat()));
	Fixed gg(this->toFloat() / mfcopy.toFloat());
	return(gg);
}

//ex02 ++F
Fixed Fixed::operator ++ (void)
{
	this->fixedval += 1;
	return(*this);
}

//ex02 F++
Fixed Fixed::operator ++ (int)
{
	Fixed gg = *this;
	this->fixedval += 1;
	return(gg);
}

//ex02 --F
Fixed Fixed::operator -- (void)
{
	this->fixedval -= 1;
	return(*this);
}

//ex02 F--
Fixed Fixed::operator -- (int)
{
	Fixed gg = *this;
	this->fixedval -= 1;
	return(gg);
}

//ex02
Fixed& Fixed::min (Fixed& a, Fixed& b)
{
	if (a<b)
		return (a);
	return (b);
}

//ex02
const Fixed& Fixed::min (const Fixed& a,const Fixed& b)
{
	if (a<b)
		return (a);
	return (b);
}

//ex02
Fixed& Fixed::max (Fixed& a,Fixed& b)
{
	if (a>b)
		return (a);
	return (b);
}

//ex02
const Fixed& Fixed::max (const Fixed& a,const Fixed& b)
{
	if (a>b)
		return (a);
	return (b);
}
