/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:16:05 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 16:40:15 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100), _maxHitPoints(100),
_energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(20),
_rangedAttackDamage(15), _armorDamageReduction(3)
{
    srand(time(NULL));
    std::cout << "Un mysterieux SC4V-TP apparait ! Il s'appelle " << _name << "." << std::endl;
    _challenges[0] = "Essaye de battre le record du monde de jongles avec un rouleau de PQ !";
    _challenges[1] = "Es-tu capable de me faire une chorégraphie parfaite de la Macarena ?";
    _challenges[2] = "Le fameux bottle flip challenge en moins de 3 essaies ?";
    _challenges[3] = "Je sais que les pompes à une main sont faciles pour toi, mais est ce que sans les mains tu pourrais y arriver ?";
    _challenges[4] = "On va rendre service à tout le monde, un roi du silence jusqu'à la fin de ta vie !";
    _challenges[5] = "J'ai pas fini mon gouté, tu penses que cette banane pourrait passer dans ton nez ?";
    _challenges[6] = "Celui-la c'est le plus facile ! Tu dois rester en apnée pendant 20 minutes.";
}

ScavTrap::ScavTrap(ScavTrap const& obj, std::string name): _name(name), _hitPoints(obj._hitPoints),
_maxHitPoints(obj._maxHitPoints), _energyPoints(obj._energyPoints), _maxEnergyPoints(obj._maxEnergyPoints),
_level(obj._level), _rangedAttackDamage(obj._rangedAttackDamage), _meleeAttackDamage(obj._meleeAttackDamage),
_armorDamageReduction(obj._armorDamageReduction)
{
    srand(time(NULL));
    std::cout << "Un mysterieux SC4V-TP apparait ! Il s'appelle " << _name << "." << std::endl;
    std::cout << "Il ressemble étrangement à " << obj._name << "." << std::endl;
    std::copy(std::begin(obj._challenges), std::end(obj._challenges), std::begin(_challenges));
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "On me dit dans l'oreillette que <SC4V-TP> " << _name << " s'est barré !" << std::endl;
}

std::string ScavTrap::getName(void)
{
    return (_name);
}

ScavTrap&   ScavTrap::operator=(ScavTrap const& obj)
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

void        ScavTrap::RangedAttack(std::string const& target)
{
    std::cout << "<SC4V-TP> " << _name << " attaque " << target << " à distance, causant "
    << _rangedAttackDamage << " points de dégâts !" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const& target)
{
    std::cout << "<SC4V-TP> " << _name << " attaque " << target << " au CAC, causant "
    << _meleeAttackDamage << " points de dégâts !" << std::endl;
}

void        ScavTrap::takeDamage(unsigned int amount)
{
    int dmg = amount - _armorDamageReduction;
    if (_hitPoints - dmg < 0)
        dmg = _hitPoints;
    _hitPoints -= dmg;
    std::cout << "<SC4V-TP> " << _name << " vient de subir " << dmg << " points de dégâts !" << std::endl;
    if (_hitPoints == 0)
        std::cout << "Ses points de vie tombent à zéro !" << std::endl;
    else
        std::cout << "Il ne lui reste plus que " << _hitPoints << " points de vie sur les " << _maxHitPoints << "." <<std::endl;
}

void        ScavTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints + amount > _maxHitPoints)
        amount = _maxHitPoints - _hitPoints;
    _hitPoints += amount;
    std::cout << "<SC4V-TP> " << _name << " vient de regagner " << amount
    << " points de vie !" << std::endl;
    if (_hitPoints == _maxHitPoints)
        std::cout << "Ses points de vie sont au max ! (" << _hitPoints  << "/" << _maxHitPoints << ")" << std::endl;
    else
        std::cout << "Ses points de vie sont de " << _hitPoints  << "/" << _maxHitPoints << "." << std::endl;
}

void    ScavTrap::challengeNewcomer(void)
{
    int rng;

    rng = rand() % 7;
    std::cout << "Bonjour je suis <SC4V-TP> " << _name << " que dirais-tu d'un petit challenge ?" << std::endl;
    std::cout << "Trop de chance tu viens de tomber sur le n°" << rng << " :" << std::endl;
    std::cout << _challenges[rng] << std::endl;
}
