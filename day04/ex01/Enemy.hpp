/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 10:43:18 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 13:53:47 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
    public:

    Enemy(void);
    Enemy(int hp, const std::string &type);
    Enemy(const Enemy &obj);
    virtual ~Enemy(void);
    Enemy               &operator=(const Enemy &obj);
    const std::string   getType(void) const;
    int                 getHP(void) const;
    virtual void        takeDamage(int damage);      

    protected:

    std::string   _type;
    int           _hp;
};

#endif