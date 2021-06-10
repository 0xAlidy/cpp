/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:57:47 by alidy             #+#    #+#             */
/*   Updated: 2021/06/08 12:55:08 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:

    Intern(void);
    Intern(const std::string target);
    Intern(const Intern& obj);
    ~Intern(void);
    Intern& operator=(const Intern& obj);

    Form* makeForm(std::string name, std::string target);
    Form* createPresidential(std::string target);
	Form* createRobotomy(std::string target);
	Form* createShrubbery(std::string target);

    class FormDontExist : public std::exception
	{
        public:
		
        virtual const char* what() const throw();
	};
};

#endif