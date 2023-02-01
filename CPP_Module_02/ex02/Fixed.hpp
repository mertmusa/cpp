/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:13:22 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/02 00:31:58 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int fixedval;
		static const int fixfrac = 8;
	public:
		//ex00
		Fixed(void);
		Fixed(const Fixed& mfcopy);
		Fixed& operator = (const Fixed& mfcopy);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		//ex01
		Fixed(const int conint);
		Fixed(const float conflo);
		float toFloat(void) const;
		int toInt(void) const;
		//ex02
		int operator > (const Fixed& mfcopy) const;
		int operator < (const Fixed& mfcopy) const;
		int operator >= (const Fixed& mfcopy);
		int operator <= (const Fixed& mfcopy);
		int operator == (const Fixed& mfcopy);
		int operator != (const Fixed& mfcopy);
		Fixed operator + (const Fixed& mfcopy);
		Fixed operator - (const Fixed& mfcopy);
		Fixed operator * (const Fixed& mfcopy);
		Fixed operator / (const Fixed& mfcopy);
		Fixed operator ++ (void);
		Fixed operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);
		static Fixed& min (Fixed& a, Fixed& b);
		const static Fixed& min (const Fixed& a,const Fixed& b);
		static Fixed& max (Fixed& a, Fixed& b);
		const static Fixed& max (const Fixed& a,const Fixed& b);
};

std::ostream& operator << (std::ostream& ost, const Fixed& mfcopy);

#endif
