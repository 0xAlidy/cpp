/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:30:50 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 16:11:11 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
    public:

    Victim(std::string name);
    Victim(const Victim &obj);
    virtual ~Victim(void);
    Victim          &operator=(const Victim &obj);
    std::string     getName(void) const;
    virtual void    getPolymorphed(void) const;

    protected:
    
    Victim(void);
    std::string _name;
};

std::ostream    &operator<<(std::ostream &os, const Victim &obj);

#endif