/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:31:22 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 11:40:21 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP
# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <exception>
# include <string.h>
# include <ctime>
# include <cmath>
# include <cstdlib>
# include <limits>
# include <sstream>

class ScalarConversion
{
    public:
    
    // Coplien
    ScalarConversion(void);
    ScalarConversion(std::string str);
    ~ScalarConversion(void);
    ScalarConversion(const ScalarConversion& obj);
    ScalarConversion& operator=(const ScalarConversion& obj);

    // Getter
    std::string getStr(void) const;

    // Setter
    void        setStr(std::string str);
    
    // Methods
    void        checkSpec(void);
	void        printChar(void);
	void        printInt(void);
	void        printFloat(void);
	void        printDouble(void);

	// Exceptions
	class NonDisplayable : public std::exception
	{
        public:

		virtual const char* what() const throw();
	};

	class ImpossibleConvert : public std::exception
	{
        public:

		virtual const char* what() const throw();
	};

    private:

    std::string _str;
};

#endif