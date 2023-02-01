/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:13:22 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/01 15:07:25 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int FixedVal;
		static const int FixFrac = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& mfcopy);
		Fixed& operator = (const Fixed& mfcopy);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
