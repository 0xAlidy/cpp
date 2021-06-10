/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:15:07 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 15:11:27 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap(void): ClapTrap("Defaut", 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(), NinjaTrap()
{
    std::cout << "La fusion a fonctionné ! SUPER-TR4P " << _name << " vient de naitre." << std::endl;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
    std::cout << "La fusion a fonctionné ! SUPER-TR4P " << _name << " vient de naitre." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& obj, std::string name): ClapTrap(obj, name), FragTrap(obj, name), NinjaTrap(obj, name)
{
    std::cout << "La fusion a fonctionné ! SUPER-TR4P " << name << " vient de naitre." << std::endl;
    std::cout << "C'est une copie conforme de " << obj._name << "." << std::endl;
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "Malgré son incroyable puissance <SUPER-TR4P> " << _name << " vient de mourir." << std::endl;
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}