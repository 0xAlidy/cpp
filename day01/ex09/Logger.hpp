/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 10:27:05 by alidy             #+#    #+#             */
/*   Updated: 2020/04/14 11:22:24 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
# include <time.h>
# include <iostream>
# include <fstream>


class Logger
{
    public:
    
    Logger(std::string fileName);
    ~Logger(void);
    void log(std::string const & dest, std::string const & message);

    private:

    std::string _fileName;
    std::string makeLogEntry(std::string const & str);
    void        logToConsol(std::string const & str);
    void        logToFile(std::string const & str);
};

#endif