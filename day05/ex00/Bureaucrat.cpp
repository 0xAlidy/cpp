#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): _name(obj._name), _grade(obj._grade)
{

}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    _grade = obj._grade;
    return (*this);
}

const std::string&  Bureaucrat::getName(void) const
{
    return (_name);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

void    Bureaucrat::upGrade(void)
{
	if (_grade > 1)
	    _grade--;
	else
		throw GradeTooHighException();
}

void    Bureaucrat::downGrade(void)
{
	if (_grade < 150)
	    _grade++;
	else
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade()  << "." << std::endl;
	return os;
}