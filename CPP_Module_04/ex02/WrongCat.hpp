/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:37:44 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 16:54:28 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{
	protected:
		std::string type;
	public:
		WrongCat();
		WrongCat(const WrongCat& acopy);
		WrongCat& operator = (const WrongCat& acopy);
		~WrongCat(void);
		void makeSound() const;
};

#endif
