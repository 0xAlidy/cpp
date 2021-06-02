/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:12:00 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 15:02:57 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
    public:

    SuperMutant(void);
    SuperMutant(const SuperMutant &obj);
    virtual ~SuperMutant(void);
    SuperMutant &operator=(const SuperMutant &obj);
    void        takeDamage(int damage);
};

#endif