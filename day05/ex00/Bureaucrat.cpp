Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
    _grade = setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): _name(obj.name), _grade(obj._grade)
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

void    Bureaucrat::setGrade(int grade)
{
    try
    {
        if (grade > 150)
            throw GradeTooLowException();
        else if (grade < 1)
            throw GradeTooHighException();
        else
            _grade = grade;
    }
    catch (const GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
    catch (const GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void    Bureaucrat::upGrade(void)
{
    try
	{
		if (_grade == 1)
	        _grade--;
		else
			throw GradeTooHighException();
	}
	catch (const GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void    Bureaucrat::downGrade(void)
{
	try
	{
		if (_grade < 150)
	        _grade++;
		else
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
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