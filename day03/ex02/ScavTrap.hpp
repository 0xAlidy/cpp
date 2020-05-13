/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:03:44 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 16:38:20 by alidy            ###   ########lyon.fr   */
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

    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& obj, std::string name);
    ~ScavTrap(void);
    void        challengeNewcomer(void);

    protected:

    std::string _challenges[7];
};

#endif