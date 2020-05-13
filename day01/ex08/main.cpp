/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 22:02:55 by alidy             #+#    #+#             */
/*   Updated: 2020/04/13 22:06:18 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human       human;
    std::string target;
    std::string action_name;    

    target = "Robert";
    action_name = "meleeAttack";
    human.action(action_name, target);
    action_name = "rangedAttack";
    human.action(action_name, target);
    action_name = "intimidatingShout";
    human.action(action_name, target);
    return (0);
}