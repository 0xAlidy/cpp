/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 12:40:18 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 13:19:48 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include <cstring>
# include "Contact.hpp"

const int   NB_CONTACT = 8;

void        search_contact(int nb, Contact *tab);
Contact     add_contact(void);

#endif
