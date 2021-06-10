/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:57:07 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 17:55:38 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int signGrade, const int execGrade): _name(name), _isSign(false), _signGrade(signGrade), _execGrade(execGrade)
{
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    else if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
}

Form::Form(const Form& obj): _name(obj._name), _isSign(obj._isSign), _signGrade(obj._signGrade), _execGrade(obj._execGrade)
{

}

Form::~Form(void)
{

}

Form& Form::operator=(const Form& obj)
{
    return (*this);
}

const std::string&  Form::getName(void) const
{
    return (_name);
}

const int   Form::getSignGrade(void) const
{
    return (_signGrade);
}

const int   Form::getExecGrade(void) const
{
    return (_execGrade);
}

bool    Form::getIsSign(void) const
{
    return (_isSign);
}

void    Form::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

const char* Form::NotSigned::what() const throw()
{
	return ("Form is not signed !");
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << obj.getName() << " form requires a grade of " << obj.getSignGrade() << " to sign, " << obj.getExecGrade()
    << " to execute, and is currently" << (obj.getIsSign() ? " " : " not ") << "signed" << std::endl;
	return (os);
}