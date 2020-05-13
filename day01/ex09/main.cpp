/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:24:51 by alidy             #+#    #+#             */
/*   Updated: 2020/04/14 11:28:39 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
    Logger logger("test.txt");

    logger.log("file", "Axel vient de se connecter");
    logger.log("consol", "Axel vient de se connecter");
    logger.log("file", "Axel vient de se déconnecter");
    logger.log("consol", "Axel vient de se déconnecter");
    return (0);
}