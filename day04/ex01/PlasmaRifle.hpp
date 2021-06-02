/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:33:27 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 14:52:00 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
    public:

    PlasmaRifle(void);
    PlasmaRifle(const PlasmaRifle &obj);
    virtual ~PlasmaRifle(void);
    PlasmaRifle &operator=(const PlasmaRifle &obj);
    void        attack(void) const;
};

#endif