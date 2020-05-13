/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 10:36:23 by alidy             #+#    #+#             */
/*   Updated: 2020/04/14 11:57:55 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string fileName): _fileName(fileName){};

Logger::~Logger(void){};

std::string Logger::makeLogEntry(std::string const & str)
{
    std::string res;
    time_t      now = time(0);
    struct tm   tstruct;
    char        buf[80];
    
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    res = buf;
    res.append(" ");
    res.append(str);
    return (res);
}

void        Logger::logToConsol(std::string const & str)
{
    std::cout << str << std::endl;
}

void        Logger::logToFile(std::string const & str)
{
    std::ofstream fd;

    fd.open(_fileName, std::fstream::app);
    fd << str << std::endl;
    fd.close();
}

void        Logger::log(std::string const & dest, std::string const & message)
{
    int i = 0;
    std::string fd[] = 
    {
        "file",
        "consol"
    };
    void (Logger::*ptr[])(std::string const & str) =
    {
        &Logger::logToFile,
        &Logger::logToConsol
    };
    while (i < 2)
    {
        if (dest == fd[i])
            (this->*ptr[i])(this->makeLogEntry(message));
        i++;
    }
}