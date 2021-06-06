#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
    public:

    Form(void);
    Form(const std::string name);
    Form(const Form& obj);
    ~Form(void);
    Form& operator=(const Form& obj);

    const std::string&  getName(void) const;
    const int           getSignGrade(void) const;
    const int           getExecGrade(void) const;
    bool                getIsSign(void) const;

    void                beSigned(const Bureaucrat& obj);
    void                signForm(bool res);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    private:

    const std::string   _name;
    bool                _isSign;
    const int           _signGrade;
    const int           _execGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif