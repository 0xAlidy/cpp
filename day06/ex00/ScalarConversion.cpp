/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:35:19 by alidy             #+#    #+#             */
/*   Updated: 2021/06/14 11:40:43 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(std::string str): _str(str)
{

}

ScalarConversion::~ScalarConversion(void)
{

}

ScalarConversion::ScalarConversion(const ScalarConversion& obj): _str(obj._str)
{

}

ScalarConversion&   ScalarConversion::operator=(const ScalarConversion& obj)
{
    _str = obj._str;
    return (*this);
}

std::string ScalarConversion::getStr(void) const
{
    return (_str);
}


void    ScalarConversion::setStr(std::string str)
{
    _str = str;
}

int		ScalarConversion::getPrecision(void)
{
    unsigned int     nb;
    unsigned int     decimal;

    nb = 0;
    while (_str[nb] && _str[nb] != '.')
        nb += 1;
    decimal = nb + 1;
    while (_str[decimal] && isdigit(_str[decimal]))
        decimal += 1;
    decimal -= nb;
    return ((_str.size() == nb || decimal == 1) ? 1 : decimal - 1);
}

int		ScalarConversion::checkChar(void)
{
	char res;
    if(!(sscanf(_str.c_str(), "%c", &res)) || _str.size() > 1)
        return (-1);
	return (static_cast<int>(res));
}

void    ScalarConversion::printChar(void)
{
    int res = checkChar();
    if(res == -1 && !(sscanf(_str.c_str(), "%d", &res)))
        throw ImpossibleConvert();
    else if (res < 32 || res > 126)
        throw NonDisplayable();
    std::cout << "'" << static_cast<char>(res) << "'" << std::endl;
}

void    ScalarConversion::printInt(void)
{
    long res = checkChar();
    if(res == -1 && !(sscanf(_str.c_str(), "%ld", &res)))
        throw ImpossibleConvert();
    if (res > INT_MAX || res < INT_MIN)
        throw ImpossibleConvert();
    std::cout << static_cast<int>(res) << std::endl;
}

void    ScalarConversion::printFloat(void)
{
    float res = checkChar();
	if (res == -1)
	{
		if (_str == "-inf" || _str == "+inf" || _str == "inf" || _str == "nan")
			std::cout << _str << "f" << std::endl;
		else if (_str == "-inff" || _str == "+inff" || _str == "inff" || _str == "nanf")
			std::cout << _str << std::endl;
		else if (!(sscanf(_str.c_str(), "%f", &res)))
			throw ImpossibleConvert();
	}
	std::cout << std::fixed << std::setprecision(this->getPrecision()) << static_cast<float>(res);
	std::cout << "f" << std::endl;
}

void    ScalarConversion::printDouble(void)
{
    double res = checkChar();
	if (res == -1)
	{
		if (_str == "-inf" || _str == "+inf"  || _str == "inf" || _str == "nan")
			std::cout << _str << std::endl;
		else if (_str == "-inff" || _str == "+inff" || _str == "inff" || _str == "nanf")
		{
			_str.resize(_str.size() - 1);
			std::cout << _str << std::endl;
		}
		else if (!(sscanf(_str.c_str(), "%lf", &res)))
			throw ImpossibleConvert();
	}
	std::cout <<  std::fixed << std::setprecision(this->getPrecision()) << static_cast<double>(res) << std::endl;
}


const char* ScalarConversion::NonDisplayable::what() const throw()
{
	return "Non displayable";
}

const char* ScalarConversion::ImpossibleConvert::what() const throw()
{
	return "impossible";
}