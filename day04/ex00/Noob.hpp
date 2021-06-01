/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Noob.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:11:26 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 18:07:21 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOOB_HPP
# define NOOB_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Noob: public Victim
{
    public:

    Noob(void);
    Noob(std::string name);
    Noob(const Noob &obj);
    virtual ~Noob(void);
    Noob    &operator=(const Noob &obj);
    void    getPolymorphed(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Noob &obj);

#endif