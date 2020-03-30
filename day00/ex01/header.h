/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 12:40:18 by alidy             #+#    #+#             */
/*   Updated: 2020/03/30 12:10:58 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include "Contact.hpp"

const int NB_CONTACT = 8;

void    search_contact(int nb, Contact *tab);

#endif
