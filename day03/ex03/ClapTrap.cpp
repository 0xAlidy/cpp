/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:06:08 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 15:47:34 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100),
_energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
_rangedAttackDamage(30), _armorDamageReduction(5)
{
    std::cout << "On l'attendait tous et le voici ! Un CL4P-TR4P du nom de " << _name << "." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& obj, std::string name): _name(name), _hitPoints(obj._hitPoints),
_maxHitPoints(obj._maxHitPoints), _energyPoints(obj._energyPoints), _maxEnergyPoints(obj._maxEnergyPoints),
_level(obj._level), _rangedAttackDamage(obj._rangedAttackDamage), _meleeAttackDamage(obj._meleeAttackDamage),
_armorDamageReduction(obj._armorDamageReduction)
{
    std::cout << "On l'attendait tous et le voici ! Un CL4P-TR4P du nom de " << _name << "." << std::endl;
    std::cout << "C'est une copie conforme de " << obj._name << "." << std::endl; 
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Qu'est ce qu'a encore foutu <CL4P-TR4P> " << _name << " pour se faire capturer ?!" << std::endl;
}

std::string ClapTrap::getName(void)
{
    return (_name);
}

ClapTrap&   ClapTrap::operator=(ClapTrap const& obj)
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

void        ClapTrap::RangedAttack(std::string const& target)
{
    std::cout << _name << " attaque " << target << " à distance, causant "
    << _rangedAttackDamage << " points de dégâts !" << std::endl;
}

void        ClapTrap::meleeAttack(std::string const& target)
{
    std::cout << _name << " attaque " << target << " au CAC, causant "
    << _meleeAttackDamage << " points de dégâts !" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    int dmg = amount - _armorDamageReduction;
    if (_hitPoints - dmg < 0)
        dmg = _hitPoints;
    _hitPoints -= dmg;
    std::cout << _name << " vient de subir " << dmg << " points de dégâts !" << std::endl;
    if (_hitPoints == 0)
        std::cout << "Ses points de vie tombent à zéro !" << std::endl;
    else
        std::cout << "Il ne lui reste plus que " << _hitPoints << " points de vie sur les " << _maxHitPoints << "." <<std::endl;
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints + amount > _maxHitPoints)
        amount = _maxHitPoints - _hitPoints;
    _hitPoints += amount;
    std::cout << _name << " vient de regagner " << amount
    << " points de vie !" << std::endl;
    if (_hitPoints == _maxHitPoints)
        std::cout << "Ses points de vie sont au max ! (" << _hitPoints  << "/" << _maxHitPoints << ")" << std::endl;
    else
        std::cout << "Ses points de vie sont de " << _hitPoints  << "/" << _maxHitPoints << "." << std::endl;
}
