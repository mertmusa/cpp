/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 02:42:00 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 21:16:24 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal{
	private:
		Brain *brain;
	protected:
		std::string type;
	public:
		Cat();
		Cat(const Cat& acopy);
		Cat& operator = (const Cat& acopy);
		~Cat(void);
		void makeSound() const;
};

#endif
