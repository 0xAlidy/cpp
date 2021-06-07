#include "Form.hpp"

Form::Form(const std::string name, const int execGrade, const int signGrade): _name(name), _isSign(false), _execGrade(execGrade), _signGrade(signGrade)
{
    if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
    else if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
}

Form::Form(const Form& obj): _name(obj._name), _isSign(obj._isSign), _execGrade(obj._execGrade), _signGrade(obj._signGrade)
{

}

Form::~Form(void)
{

}

Form& Form::operator=(const Form& obj)
{
    return (*this);
}

const std::string&  Form::getName(void) const
{
    return (_name);
}

const int   Form::getSignGrade(void) const
{
    return (_signGrade);
}

const int   Form::getExecGrade(void) const
{
    return (_execGrade);
}

bool    Form::getIsSign(void) const
{
    return (_isSign);
}

void    Form::beSigned(const Bureaucrat& obj)
{
    if (obj.getGrade() > _signGrade)
        throw GradeTooLowException();
    _isSign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
    os << obj.getName() << " form requires a grade of " << obj.getSignGrade() << " to sign, " << obj.getExecGrade()
    << " to execute, and is currently" << (obj.getIsSign() ? " " : " not ") << "signed";
	return (os);
}