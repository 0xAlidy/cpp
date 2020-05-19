/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:00:21 by alidy             #+#    #+#             */
/*   Updated: 2020/05/19 11:18:07 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
    public:
    
    ClapTrap(std::string name);
    ClapTrap(std::string name, int hit, int maxHit, int energy, int maxEnergy, int lvl, int melee, int ranged, int armor);
    ClapTrap(ClapTrap const& obj, std::string name);
    ~ClapTrap(void);
    ClapTrap&   operator=(ClapTrap const& obj);
    std::string getName(void);
    void        rangedAttack(std::string const& target);
    void        meleeAttack(std::string const& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);

    protected:

    std::string _name;
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
