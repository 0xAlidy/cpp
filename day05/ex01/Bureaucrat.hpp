#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class Bureaucrat
{
    public:

    Bureaucrat(void);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& obj);
    ~Bureaucrat(void);
    Bureaucrat& operator=(const Bureaucrat& obj);

    const std::string&  getName(void) const;
    int                 getGrade(void) const;

    void                upGrade(void);
    void                downGrade(void);
    void	            signForm(Form& form);

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
    int                 _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif