/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:27:05 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/10 12:34:58 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

//Please note that exception classes don’t have to be designed in
//Orthodox Canonical Form. But every other class has to.

#include <iostream>
#include <exception>



class Bureaucrat{
		std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string sName, int sGrade);
		Bureaucrat(const Bureaucrat& bcopy);
		Bureaucrat& operator = (const Bureaucrat& bcopy);
		~Bureaucrat();
		void setName(const std::string sName);
		void setGrade(int sGrade);
		const std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what() const _NOEXCEPT {
					return ("\033[1;31mGrade is too high!\033[0m");
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const _NOEXCEPT {
					return ("\033[1;31mGrade is too low!\033[0m");
				}
		};
};
std::ostream& operator << (std::ostream& ost, const Bureaucrat& bcopy);

#endif
