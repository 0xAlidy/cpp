/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zfraction.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 10:36:53 by alidy             #+#    #+#             */
/*   Updated: 2020/04/27 17:58:05 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZFRACTION_HPP
# define ZFRACTION_HPP

#include <iostream>

class Zfraction
{
  public:

  Zfraction(int numerateur = 0, int denominateur = 1);
  ~Zfraction(void);
  Zfraction&  operator+=(Zfraction const& n);
  Zfraction&  operator*=(Zfraction const& n);
  void        copy(Zfraction const& n);
  void        simplifier(void);
  void        afficher(void) const;
  bool        estEgal(Zfraction const& b) const;
  bool        estPlusPetit(Zfraction const& b) const;
  
  private:

  int   m_numerateur;
  int   m_denominateur;
};

Zfraction       operator+(Zfraction const& a, Zfraction const& b);
Zfraction       operator*(Zfraction const& a, Zfraction const& b);
bool            operator>(Zfraction const& a, Zfraction const& b);
bool            operator==(Zfraction const& a, Zfraction const& b);
int             pgcd(int a, int b);
std::ostream&   operator<<(std::ostream& flux, Zfraction const& fraction);

#endif