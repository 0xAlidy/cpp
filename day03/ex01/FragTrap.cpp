/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:16:05 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 15:24:05 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): _name("Defaut"), _hitPoints(100), _maxHitPoints(100),
_energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
_rangedAttackDamage(20), _armorDamageReduction(5)
{
    srand(time(NULL));
    std::cout << "Un FR4G-TP sauvage apparait ! Il s'appelle " << _name << "." << std::endl;
}

FragTrap::FragTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100),
_energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
_rangedAttackDamage(20), _armorDamageReduction(5)
{
    srand(time(NULL));
    std::cout << "Un FR4G-TP sauvage apparait ! Il s'appelle " << _name << "." << std::endl;
}

FragTrap::FragTrap(FragTrap const& obj, std::string name): _name(name), _hitPoints(obj._hitPoints),
_maxHitPoints(obj._maxHitPoints), _energyPoints(obj._energyPoints), _maxEnergyPoints(obj._maxEnergyPoints),
_level(obj._level), _rangedAttackDamage(obj._rangedAttackDamage), _meleeAttackDamage(obj._meleeAttackDamage),
_armorDamageReduction(obj._armorDamageReduction)
{
    srand(time(NULL));
    std::cout << "Un FR4G-TP sauvage apparait ! Il s'appelle " << _name << "." << std::endl;
    std::cout << "C'est une copie conforme de " << obj._name << "." << std::endl; 
}

FragTrap::~FragTrap(void)
{
    std::cout << "La terrible nouvelle vient de tomber notre chère <FR4G-TP> " << _name << " a explosé !" << std::endl;
}

std::string FragTrap::getName(void)
{
    return (_name);
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

void        FragTrap::RangedAttack(std::string const& target)
{
    std::cout << "<FR4G-TP> " << _name << " attaque " << target << " à distance, causant "
    << _rangedAttackDamage << " points de dégâts !" << std::endl;
}

void        FragTrap::meleeAttack(std::string const& target)
{
    std::cout << "<FR4G-TP> " << _name << " attaque " << target << " au CAC, causant "
    << _meleeAttackDamage << " points de dégâts !" << std::endl;
}

void        FragTrap::takeDamage(unsigned int amount)
{
    
    int dmg = (int)amount - _armorDamageReduction;
    if (dmg < 0)
        dmg = 0;
    else if (_hitPoints - dmg < 0)
        dmg = _hitPoints;
    _hitPoints -= dmg;
    std::cout << "<FR4G-TP> " << _name << " vient de subir " << dmg << " points de dégâts !" << std::endl;
    if (_hitPoints == 0)
        std::cout << "Ses points de vie tombent à zéro !" << std::endl;
    else
        std::cout << "Il ne lui reste plus que " << _hitPoints << " points de vie sur les " << _maxHitPoints << "." <<std::endl;
}

void        FragTrap::beRepaired(unsigned int amount)
{
    if ((int)amount < 0)
        amount = 0;
    else if (_hitPoints + amount > _maxHitPoints)
        amount = _maxHitPoints - _hitPoints;
    _hitPoints += amount;
    std::cout << "<FR4G-TP> " << _name << " vient de regagner " << amount
    << " points de vie !" << std::endl;
    if (_hitPoints == _maxHitPoints)
        std::cout << "Ses points de vie sont au max ! (" << _hitPoints  << "/" << _maxHitPoints << ")" << std::endl;
    else
        std::cout << "Ses points de vie sont de " << _hitPoints  << "/" << _maxHitPoints << "." << std::endl;
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
    return (this->*ptr[rng])(target);
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