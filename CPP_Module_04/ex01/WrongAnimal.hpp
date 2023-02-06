/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:31:40 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 16:54:47 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& acopy);
		WrongAnimal& operator = (const WrongAnimal& acopy);
		virtual ~WrongAnimal(void);
		void setType(std::string sType);
		std::string getType(void) const;
		void makeSound() const;
};

#endif
