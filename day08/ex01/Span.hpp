/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:14:50 by alidy             #+#    #+#             */
/*   Updated: 2021/06/14 15:15:58 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <stdexcept>
# include <algorithm> 

class Span
{
    public:

    Span(void);
    Span(unsigned int n);
    Span(const Span& obj);
    ~Span(void);
    Span& operator=(const Span& obj);

    unsigned int    shortestSpan(void);
    unsigned int    longestSpan(void);
    void			addNumber(int n);
    void			addRange(int a, int b);

    private:

    std::vector<int>    _vect;
    unsigned int        _n;
};

#endif