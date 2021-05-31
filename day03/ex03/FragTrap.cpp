/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:16:05 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 15:49:34 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    srand(time(NULL));
    std::cout << "Un FR4G-TP sauvage apparait ! Il s'appelle " << _name << "." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    srand(time(NULL));
    std::cout << "Un FR4G-TP sauvage apparait ! Il s'appelle " << _name << "." << std::endl;
}

FragTrap::FragTrap(FragTrap const& obj, std::string name): ClapTrap(obj, name)
{
    srand(time(NULL));
    std::cout << "Un FR4G-TP sauvage apparait ! Il s'appelle " << _name << "." << std::endl;
    std::cout << "C'est une copie conforme de " << obj._name << "." << std::endl; 
}

FragTrap::~FragTrap(void)
{
    std::cout << "La terrible nouvelle vient de tomber notre chère <FR4G-TP> " << _name << " a explosé !" << std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const& obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _maxHitPoints = obj._maxHitPoints;
        _energyPoints = obj._energyPoints;
        _maxEnergyPoints = obj._maxEnergyPoints;
        _level = obj._level;
        _meleeAttackDamage = obj._meleeAttackDamage;
        _rangedAttackDamage = obj._rangedAttackDamage;
        _armorDamageReduction = obj._armorDamageReduction;
    }
    return (*this);
}

void        FragTrap::vaulthunter_dot_exe(std::string const& target)
{
    if (_energyPoints < 25)
    {
        std::cout << "Notre bon vieu <FR4G-TP> " << _name << " n'a plus d'energie." << "(" << _energyPoints 
        << "/" << _maxEnergyPoints << ")" << std::endl;
    }
    else
    {
        _energyPoints -= 25;
        randomAttack(target);
        std::cout << "Ce malade de <FR4G-TP> " << _name << " a dépensé 25 points d'energie pour cette incroyable attaque !" << std::endl;
        std::cout << "Il ne lui en reste plus que " << _energyPoints << " points d'énergie sur " << _maxEnergyPoints << "." << std::endl;
    }
}

void    FragTrap::randomAttack(std::string const& target)
{
    int rng;

    rng = rand() % 5;
    void (FragTrap::*ptr[])(std::string const& target) =
    {
        &FragTrap::foamSword,
        &FragTrap::Bazooka,
        &FragTrap::sheep,
        &FragTrap::bullying,
        &FragTrap::shoes
    };
    (this->*ptr[rng])(target);
}

void    FragTrap::foamSword(std::string const& target)
{
    std::cout << "<FR4G-TP> " << _name << " sort sa magnifique épée en mousse pour aller défoncer " 
    << target << " ! Il semble terriblement souffrir ..." << std::endl;
}

void    FragTrap::Bazooka(std::string const& target)
{
    std::cout << "<FR4G-TP> " << _name << " pousse " << target 
    << " avec ses bras en criant : \"GOMU GOMU NOOOO.... BAZOOKAAAAA !!!\"" << std::endl;
    std::cout << target << " vient de décoller dans les airs, on ne le reverra plus." << std::endl;
}

void    FragTrap::sheep(std::string const& target)
{
    std::cout << "<FR4G-TP> " << _name << " prononce une formule magique incomprehensible." << std::endl;
    std::cout << "Voila que " << target << " se transforme en mouton! Il ne pourra plus combattre après ca !" << std::endl; 
}

void    FragTrap::bullying(std::string const& target)
{
    std::cout << "<FR4G-TP> " << _name << " essaye d'intimider " << target << " avec des insultes !" << std::endl;
    std::cout << "Cela ne semble avoir aucuns effets sur lui." << std::endl;
}

void    FragTrap::shoes(std::string const& target)
{
    std::cout << "<FR4G-TP> " << _name << " quitte ses pompes pour les balancer sur " << target << " !" << std::endl;
    std::cout << "L'attaque est extrement efficace, " << target << " s'est évanoui à cause de l'odeur..." << std::endl;
}