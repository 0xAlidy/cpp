/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:17:52 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 17:41:20 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:

    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& obj);
    virtual ~RobotomyRequestForm(void);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

    void    execute(const Bureaucrat& executor) const;

    private :

    const std::string   _target;
};

#endif