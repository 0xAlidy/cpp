/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:57:17 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 16:29:55 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:

    Form(void);
    Form(const std::string name, const int signGrade, const int execGrade);
    Form(const Form& obj);
    virtual ~Form(void);
    Form& operator=(const Form& obj);

    const std::string&  getName(void) const;
    const int           getSignGrade(void) const;
    const int           getExecGrade(void) const;
    bool                getIsSign(void) const;

    void                beSigned(const Bureaucrat& obj);
    void                signForm(bool res);
    virtual void        execute(const Bureaucrat& executor) const = 0;

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class NotSigned : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    private:

    const std::string   _name;
    bool                _isSign;
    const int           _signGrade;
    const int           _execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif