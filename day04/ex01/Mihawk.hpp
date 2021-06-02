/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mihawk.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:02:08 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 15:02:44 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIHAWK_HPP
# define MIHAWK_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class Mihawk: public Enemy
{
    public:

    Mihawk(void);
    Mihawk(const Mihawk &obj);
    virtual ~Mihawk(void);
    Mihawk &operator=(const Mihawk &obj);
};

#endif