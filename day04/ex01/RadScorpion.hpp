/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadSCorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:23:18 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 15:03:08 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
    public:

    RadScorpion(void);
    RadScorpion(const RadScorpion &obj);
    virtual ~RadScorpion(void);
    RadScorpion &operator=(const RadScorpion &obj);
};

#endif
