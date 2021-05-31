/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 16:26:45 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& obj, std::string name);
    ~ScavTrap(void);
    ScavTrap&   operator=(ScavTrap const& obj);
    void        challengeNewcomer(void);

    protected:

    std::string _challenges[7];
};

#endif