/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 09:27:59 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 16:20:36 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    Zombie      *zombie;
    Zombie      zombieStack("Pierre", "walker");
    ZombieEvent event;

    zombieStack.announce();
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
