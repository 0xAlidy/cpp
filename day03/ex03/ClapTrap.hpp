/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 15:00:21 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 16:02:21 by alidy            ###   ########lyon.fr   */
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
    ClapTrap(ClapTrap const& obj, std::string name);
    ~ClapTrap(void);
    ClapTrap&   operator=(ClapTrap const& obj);
    std::string getName(void);
    void        RangedAttack(std::string const& target);
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
