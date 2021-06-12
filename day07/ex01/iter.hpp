/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:56:38 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 12:10:18 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void    ft_print(const T& elem)
{
    std::cout << elem << std::endl;
}

template<typename T>
void    iter(T* array, unsigned int len, void (*function)(const T& elem))
{
    for(int i= 0; i < len; i++)
        function(array[i]);
}

#endif