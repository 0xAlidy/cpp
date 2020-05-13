/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2020/05/01 18:11:41 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>

class FragTrap
{
    public:

    FragTrap(std::string name);
    FragTrap(FragTrap const& obj, std::string name);
    ~FragTrap(void);
    std::string getName(void);
    FragTrap&   operator=(FragTrap const& obj);
    void        RangedAttack(std::string const& target);
    void        meleeAttack(std::string const& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        vaulthunter_dot_exe(std::string const& target);
    void        randomAttack(std::string const& target);
    void        foamSword(std::string const& target);
    void        Bazooka(std::string const& target);
    void        sheep(std::string const& target);
    void        bullying(std::string const& target);
    void        shoes(std::string const& target);

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