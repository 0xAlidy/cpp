/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 15:50:41 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 16:55:25 by alidy            ###   ########lyon.fr   */
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
    ~HumanA(void);
    void        attack(void) const;

    private:
    
    std::string _name;
    Weapon      &_weapon;

};

#endif