/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zfraction.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 10:45:02 by alidy             #+#    #+#             */
/*   Updated: 2020/04/29 17:20:28 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zfraction.hpp"

Zfraction::Zfraction(int num, int deno):m_numerateur(num), m_denominateur(deno)
{
    simplifier();
}

Zfraction::~Zfraction(void){}

Zfraction&   Zfraction::operator+=(Zfraction const& n)
{
    m_numerateur = m_numerateur * n.m_denominateur + n.m_numerateur * m_denominateur;
    m_denominateur = m_denominateur * n.m_denominateur;
    simplifier();
    return (*this);
}

Zfraction&   Zfraction::operator*=(Zfraction const& n)
{
    m_numerateur = m_numerateur * n.m_numerateur;
    m_denominateur = m_denominateur * n.m_denominateur;
    simplifier();
    return (*this);
}

void        Zfraction::afficher(void) const
{
    if (m_denominateur == 1)
        std::cout << m_numerateur;
    else
        std::cout << m_numerateur << "/" << m_denominateur;
}

void        Zfraction::copy(Zfraction const& n)
{
    m_numerateur = n.m_numerateur;
    m_denominateur = n.m_denominateur;
}

bool        Zfraction::estEgal(Zfraction const& b) const
{
    return (m_numerateur == b.m_numerateur && m_denominateur == b.m_denominateur);
}

bool        Zfraction::estPlusPetit(Zfraction const& b) const
{
    return(m_numerateur * b.m_denominateur < m_denominateur * b.m_numerateur);
}

int pgcd(int a, int b)
{
    int t;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void    Zfraction::simplifier(void)
{
    int d;

    d = pgcd(m_numerateur, m_denominateur);
    m_numerateur /= d;
    m_denominateur /= d;
}

Zfraction   operator+(Zfraction const& a, Zfraction const& b)
{
    Zfraction res;

    res.copy(a);
    res += b;
    return (res);
}

Zfraction   operator*(Zfraction const& a, Zfraction const& b)
{
    Zfraction res;

    res.copy(a);
    res *= b;
    return (res);
}

bool   operator>(Zfraction const& a, Zfraction const& b)
{
    return (b.estPlusPetit(a));
}

bool   operator==(Zfraction const& a, Zfraction const& b)
{
    return (a.estEgal(b));
}

std::ostream&   operator<<(std::ostream& flux, Zfraction const& fraction)
{
    fraction.afficher();
    return (flux);
}