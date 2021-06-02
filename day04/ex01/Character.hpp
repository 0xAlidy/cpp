/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:28:56 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 14:32:17 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    public:

    Character(void);
    Character(const std::string &name);
    Character(const Character &obj);
    ~Character(void);
    Character           &operator=(const Character &obj);
    const std::string   getName(void) const;
    int                 getAP(void) const;
    AWeapon             *getWeapon(void) const;
    void                recoverAP(void);
    void                equip(AWeapon *weapon);
    void                attack(Enemy *enemy); 

    private:

    std::string _name;
    int         _ap;
    AWeapon     *_weapon;
};

std::ostream    &operator<<(std::ostream &os, const Character &obj);

#endif
