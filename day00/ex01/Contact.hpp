/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 15:37:02 by alidy             #+#    #+#             */
/*   Updated: 2020/03/27 10:16:37 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSNAME_H
# define CLASSNAME_H

# include "header.h"

class Contact
{
    public :

    Contact(void);
    ~Contact(void);
    void set_firstName(std::string firstName);
    void set_lastName(std::string lastName);
    void set_nickname(std::string nickname);
    void set_login(std::string login);
    void set_postalAddress(std::string postalAddress);
    void set_emailAddress(std::string emailAddress);
    void set_phoneNumber(std::string phoneNumber);
    void set_birthdayDate(std::string birthdayDate);
    void set_favoriteMeal(std::string favoriteMeal);
    void set_underwearColor(std::string underwearColor);
    void set_darkestSecret(std::string darkestSecret);
    std::string get_firstName(void);
    std::string get_lastName(void);
    std::string get_nickname(void);
    std::string get_login(void);
    std::string get_postalAddress(void);
    std::string get_emailAddress(void);
    std::string get_phoneNumber(void);
    std::string get_birthdayDate(void);
    std::string get_favoriteMeal(void);
    std::string get_underwearColor(void);
    std::string get_darkestSecret(void);
    
    private:
    
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAddress;
    std::string _emailAddress;
    std::string _phoneNumber;
    std::string _birthdayDate;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
};

#endif
