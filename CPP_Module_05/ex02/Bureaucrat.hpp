/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:27:05 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/12 20:09:20 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Form;

class Bureaucrat{
		const std::string name;
		int grade;
	public:
		//Bureaucrat();
		Bureaucrat(const std::string sName, int sGrade);
		Bureaucrat(const Bureaucrat& bcopy);
		Bureaucrat& operator = (const Bureaucrat& bcopy);
		~Bureaucrat();
		//
		//void setName(const std::string sName);
		void setGrade(int sGrade);
		//
		const std::string getName() const;
		int getGrade() const;
		//
		void increment(int inc);
		void decrement(int dec);
		//
		void signForm(Form bcopy);//const std::string sName, bool sIsSigned
		//
		class GradeTooHighException : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("\033[1;31mGrade is too high!\033[0m");
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char * what() const throw(){
					return ("\033[1;31mGrade is too low!\033[0m");
				}
		};
};
std::ostream& operator << (std::ostream& ost, const Bureaucrat& bcopy);

#endif
