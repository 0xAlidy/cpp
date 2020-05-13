/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 15:50:41 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 16:32:37 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
    public:
    
    HumanA(std::string name, Weapon &weapon);
    HumanA(void);
    ~HumanA(void);
    void        attack(void) const;

    private:
    
    std::string _name;
    Weapon      &_weapon;

};

#endif