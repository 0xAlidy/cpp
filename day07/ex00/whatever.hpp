/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:43:11 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 11:54:54 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void    swap(T& a, T& b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template<typename T>
const T   min(const T& a, const T& b)
{
    return (a < b ? a : b);
}

template<typename T>
const T   max(const T& a, const T& b)
{
    return (a > b ? a : b);
}

#endif