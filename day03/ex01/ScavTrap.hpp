/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2020/05/01 21:13:39 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>

class ScavTrap
{
    public:

    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& obj, std::string name);
    ~ScavTrap(void);
    std::string getName(void);
    ScavTrap&   operator=(ScavTrap const& obj);
    void        RangedAttack(std::string const& target);
    void        meleeAttack(std::string const& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        challengeNewcomer(void);

    protected:
    
    std::string _name;
    std::string _challenges[7];
    int         _hitPoints;
    int         _maxHitPoints;
    int         _energyPoints;
    int         _maxEnergyPoints;
    int         _level;
    int         _meleeAttackDamage;
    int         _rangedAttackDamage;
    int         _armorDamageReduction;
};

#endif