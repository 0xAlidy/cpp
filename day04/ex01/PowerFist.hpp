/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:38:14 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 14:51:48 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
    public:

    PowerFist(void);
    PowerFist(const PowerFist &obj);
    virtual ~PowerFist(void);
    PowerFist &operator=(const PowerFist &obj);
    void        attack(void) const;
};

#endif