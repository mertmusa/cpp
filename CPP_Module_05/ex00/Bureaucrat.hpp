/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:27:05 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/08 00:06:50 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

//Please note that exception classes don’t have to be designed in
//Orthodox Canonical Form. But every other class has to.

#include <iostream>

class Bureaucrat{
		const std::string name;
		int grade;
	public:
		Bureaucrat(const std::string sName, int sGrade);
		~Bureaucrat();
		setName(const std::string sName);
		setGrade(int sGrade);
		getName() const;
		getGrade() const;
		increment();
		decrement();
};
	std::ostream& operator << (std::ostream& ost, const Bureaucrat& bcopy);

#endif
