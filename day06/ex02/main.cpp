/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:01:32 by alidy             #+#    #+#             */
/*   Updated: 2021/06/12 11:31:24 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_reference(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast exp)
    {
        std::cout << "Caught: " << exp.what() << std::endl;
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast exp)
    {
        std::cout << "Caught: " << exp.what() << std::endl;
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast exp)
    {
        std::cout << "Caught: " << exp.what() << std::endl;
    }
}
        
void identify_from_pointer(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

Base    *generate(void)
{
    int rand = std::rand() % 3;

    if (rand == 1)
        return (new A());
    else if (rand == 2)
        return (new B());
    else
        return (new C());
}

int main(void)
{
    std::srand(std::time(NULL));
    Base *base = generate();

    identify_from_pointer(base);
    identify_from_reference(*base);
    
    delete base;
    return (0);
}