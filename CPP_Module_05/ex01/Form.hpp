/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:04:41 by mtemel            #+#    #+#             */
/*   Updated: 2023/02/12 02:50:14 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int reqGradeSign;
		const int reqGradeExe;
	public:
		//Form();
		Form(const std::string sName, const int sReqGradeSign, const int sReqGradeExe);
		Form(const Form& bcopy);
		Form& operator = (const Form& bcopy);
		~Form();
		//
		//void setName(const std::string sName);
		void setIsSigned(bool sIsSigned);
		//void setReqGradeSign(const int sReqGradeSign);
		//void setReqGradeExe(const int sReqGradeExe);
		//
		const std::string getName() const;
		bool getIsSigned() const;
		int getReqGradeSign()const;
		int getReqGradeExe()const;
		//
		//void increment();
		//void decrement();
		//
		void beSigned(Bureaucrat sBureaucrat);
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
std::ostream& operator << (std::ostream& ost, const Form& bcopy);

#endif
