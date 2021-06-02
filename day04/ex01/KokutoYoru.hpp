/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KokutoYoru.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:12:54 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 15:22:40 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOKUTOYORU_HPP
# define KOKUTOYORU_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class KokutoYoru: public AWeapon
{
    public:

    KokutoYoru(void);
    KokutoYoru(const KokutoYoru &obj);
    virtual ~KokutoYoru(void);
    KokutoYoru &operator=(const KokutoYoru &obj);
    void        attack(void) const;
};

#endif