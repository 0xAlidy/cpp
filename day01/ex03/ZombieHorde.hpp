/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 09:56:18 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 10:47:32 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
    public:

    ZombieHorde(int n);
    ~ZombieHorde(void);
    void        announce(void);
    std::string randomChump(void);
    std::string randomType(void);

    private:

    Zombie  *_zombies;
    int     _count;
};

#endif
