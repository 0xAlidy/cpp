/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:38:52 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 17:53:42 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj): Form(obj), _target(obj._target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    std::ofstream   myfile;
    std::string     name;

    if (executor.getGrade() > this->getExecGrade())
        throw Bureaucrat::GradeTooLowException();
    else if (this->getIsSign() == false)
        throw NotSigned();
    name = _target + "_shrubbery"; 
    myfile.open (name);
    myfile << "         v" << std::endl;
    myfile << "        >X<" << std::endl;
    myfile << "         A" << std::endl;
    myfile << "        d$b" << std::endl;
    myfile << "      .d\\$$b." << std::endl;
    myfile << "    .d$i$$\\$$b." << std::endl;
    myfile << "      d$$@b" << std::endl;
    myfile << "      d\\$$$ib" << std::endl;
    myfile << "    .d$$$\\$$$b" << std::endl;
    myfile << "  .d$$@$$$$\\$$ib." << std::endl;
    myfile << "      d$$i$$b" << std::endl;
    myfile << "     d\\$$$$@$b" << std::endl;
    myfile << "  .d$@$$\\$$$$$@b." << std::endl;
    myfile << ".d$$$$i$$$\\$$$$$$b." << std::endl;
    myfile << "        ###" << std::endl;
    myfile << "        ###" << std::endl;
    myfile << "        ### mh" << std::endl;
    myfile.close();
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    (void)obj;
    return (*this);
}