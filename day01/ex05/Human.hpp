/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 14:15:58 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 15:16:13 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
    public:

    Human(void);
    ~Human(void);
    std::string     identify(void) const;
    const Brain     &getBrain(void) const;

    private:

    const Brain     _brain;
};

#endif