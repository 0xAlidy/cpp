/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:34:20 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 17:41:24 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form
{
    public:

    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& obj);
    virtual ~ShrubberyCreationForm(void);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

    void    execute(const Bureaucrat& executor) const;

    private :

    const std::string   _target;
};

#endif