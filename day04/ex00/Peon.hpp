/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:09:26 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 17:06:18 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
    public:

    Peon(void);
    Peon(std::string name);
    Peon(const Peon &obj);
    virtual ~Peon(void);
    Peon    &operator=(const Peon &obj);
    void    getPolymorphed(void) const;
};

#endif
