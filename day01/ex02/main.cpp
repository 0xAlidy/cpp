/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 09:27:59 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 10:58:31 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    Zombie      *zombie;
    ZombieEvent event;

    srand(time(NULL));
    zombie = event.randomChump();
    zombie->announce();
    delete zombie;
    event.set_zombieType("runner");
    zombie = event.randomChump();
    zombie->announce();
    delete zombie;
    return (0);
}
