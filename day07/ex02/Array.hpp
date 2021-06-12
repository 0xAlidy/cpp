/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:11:54 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 12:42:43 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template<typename T>
class Array
{
    public:
    
    Array(void): _array(NULL), _n(0) {}
    Array(unsigned int n): _array(new T[n]), _n(n) {}
    ~Array(void)
    {
        if (_array != NULL)
            delete[] _array;
    }
    Array(const Array& obj): _n(obj._n)
    {
        _array = new T[_n];
        for(int i=0; i < _n; i++)
            _array[i] = obj._array[i];
    }
    Array& operator=(const Array& obj)
    {
        if (_array != NULL)
            delete[] _array;
        _array = new T[_n];
        for(int i=0; i < _n; i++)
            _array[i] = obj._array[i];
    }

    T& operator[](int i) const
    {
        if (i < 0 || i > _n || _array == NULL)
            throw std::out_of_range("Array[] Out of range");
        return (_array[i]);
    }

    unsigned int size(void) const
    {
        return (_n);
    }

    private:

    T               *_array;
    unsigned int    _n;

};

#endif