/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:12:03 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 12:59:35 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
    public:

    AWeapon(void);
    AWeapon(const std::string &name, int apcost, int damage);
    AWeapon(const AWeapon &obj);
    virtual ~AWeapon(void);
    AWeapon             &operator=(const AWeapon &obj);
    const std::string   getName(void) const;
    int                 getDamage(void) const;
    int                 getAPCost(void) const;
    virtual void        attack(void) const = 0;

    protected:

    std::string _name;
    int         _damage;
    int         _apcost;
};

#endif