/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 09:13:00 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 16:26:24 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
    public:

    SuperTrap(void);
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const& obj, std::string name);
    ~SuperTrap(void);
    SuperTrap&   operator=(SuperTrap const& obj);
    void        rangedAttack(std::string const& target);
    void        meleeAttack(std::string const& target);
};

#endif