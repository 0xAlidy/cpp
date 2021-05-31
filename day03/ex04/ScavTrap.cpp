/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:16:05 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 15:47:06 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("Defaut", 100, 100, 50, 50, 1, 20, 15, 3)
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

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
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

ScavTrap::ScavTrap(ScavTrap const& obj, std::string name): ClapTrap(obj, name)
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

void    ScavTrap::challengeNewcomer(void)
{
    int rng;

    rng = rand() % 7;
    std::cout << "Bonjour je suis <SC4V-TP> " << _name << " que dirais-tu d'un petit challenge ?" << std::endl;
    std::cout << "Trop de chance tu viens de tomber sur le n°" << rng << " :" << std::endl;
    std::cout << _challenges[rng] << std::endl;
}
