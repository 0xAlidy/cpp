/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:27:19 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 17:41:17 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:

    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& obj);
    virtual ~PresidentialPardonForm(void);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

    void    execute(const Bureaucrat& executor) const;

    private :

    const std::string   _target;
};

#endif