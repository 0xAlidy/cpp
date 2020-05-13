/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 15:57:31 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 16:41:50 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    public:
    
    HumanB(std::string name);
    ~HumanB(void);
    void        attack(void) const;
    void        setWeapon(Weapon &weapon);

    private:
    
    std::string _name;
    Weapon      *_weapon;

};

#endif