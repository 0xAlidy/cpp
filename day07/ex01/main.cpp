/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:02:25 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 12:10:48 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int a[] = {10, 8, 4, 3};
    std::string b[] = {"salut", "bonjour", "ok", "test"};

    iter(a, 4, ft_print);
    std::cout << std::endl;
    iter(b, 4, ft_print);
}