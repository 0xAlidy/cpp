/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 15:49:49 by alidy             #+#    #+#             */
/*   Updated: 2020/04/14 10:59:35 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
    std::cout << target << " vient d'etre touché par une attaque au corps à corps" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << target << " vient d'etre touché par une attaque à distance" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << target << " vient d'entendre un cri intimidant" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    int i;

    i = 0;
    void (Human::*ptr[])(std::string const &) =
    {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };
    std::string commands[] =
    {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout"
    };
    while (i < 3)
    {
        if (action_name == commands[i])
            (this->*ptr[i])(target);                // this-> pour human
        i++;
    }
}