/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 11:15:24 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 09:27:29 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
    public:

    ZombieEvent(void);
    ~ZombieEvent(void);
    void    set_zombieType(std::string type);
    Zombie  *newZombie(std::string name);
    Zombie  *randomChump(void);

    private:

    std::string _type;
};

#endif
