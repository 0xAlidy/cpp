/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 09:49:21 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 13:10:34 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Contact::Contact(void){}

Contact::~Contact(void){}

void        Contact::set_firstName(std::string firstName)
{ 
    _firstName = firstName;
}

void        Contact::set_lastName(std::string lastName)
{ 
    _lastName = lastName;
}

void        Contact::set_nickname(std::string nickname)
{ 
    _nickname = nickname;
}

void        Contact::set_login(std::string login)
{ 
    _login = login;
}

void        Contact::set_postalAddress(std::string postalAddress)
{ 
    _postalAddress = postalAddress;
}

void        Contact::set_emailAddress(std::string emailAddress)
{ 
    _emailAddress = emailAddress;
}

void        Contact::set_phoneNumber(std::string phoneNumber)
{ 
    _phoneNumber = phoneNumber;
}

void        Contact::set_birthdayDate(std::string birthdayDate)
{ 
    _birthdayDate = birthdayDate;
}

void        Contact::set_favoriteMeal(std::string favoriteMeal)
{ 
    _favoriteMeal = favoriteMeal;
}

void        Contact::set_underwearColor(std::string underwearColor)
{ 
    _underwearColor = underwearColor;
}

void        Contact::set_darkestSecret(std::string darkestSecret)
{ 
    _darkestSecret = darkestSecret;
}

std::string Contact::get_firstName(void)
{
    return (_firstName);
}

std::string Contact::get_lastName(void)
{
    return (_lastName);
}

std::string Contact::get_nickname(void)
{
    return (_nickname);
}

std::string Contact::get_login(void)
{
    return (_login);
}

std::string Contact::get_postalAddress(void)
{
    return (_postalAddress);
}

std::string Contact::get_emailAddress(void)
{
    return (_emailAddress);
}

std::string Contact::get_phoneNumber(void)
{
    return (_phoneNumber);
}

std::string Contact::get_birthdayDate(void)
{
    return (_birthdayDate);
}

std::string Contact::get_favoriteMeal(void)
{
    return (_favoriteMeal);
}

std::string Contact::get_underwearColor(void)
{
    return (_underwearColor);
}

std::string Contact::get_darkestSecret(void)
{
    return (_darkestSecret);
}
