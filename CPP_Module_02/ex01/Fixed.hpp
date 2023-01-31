/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:13:22 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/01 01:53:51 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int fixedval;
		static const int fixfrac = 8;
	public:
		Fixed(void);
		Fixed(const int conint);
		Fixed(const float conflo);
		Fixed(const Fixed& mfcopy);
		Fixed& operator = (const Fixed& mfcopy);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFlaot(void);
		int toInt(void);
};
