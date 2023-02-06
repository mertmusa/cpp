/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:20:03 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/06 19:03:27 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	private:
		std::string idea[100];
	public:
		Brain();
		Brain(const Brain& acopy);
		Brain& operator = (const Brain& acopy);
		~Brain(void);
		void setIdea(std::string *sIdea);
		std::string *getIdea(void) const;
};

#endif
