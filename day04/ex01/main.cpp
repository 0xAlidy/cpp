/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:41:48 by alidy             #+#    #+#             */
/*   Updated: 2021/06/02 15:34:11 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Mihawk.hpp"
#include "KokutoYoru.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me << std::endl;
    
    Enemy* b = new RadScorpion();
    Enemy* c = new SuperMutant();
    Enemy* mihawk = new Mihawk();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* kokuto = new KokutoYoru();

    std::cout << std::endl;
    
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << std::endl;

    me->equip(pf);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    me->attack(c);
    std::cout << *me;
    std::cout << std::endl;


    me->equip(kokuto);
    std::cout << *me;
    me->attack(mihawk);
    std::cout << *me;
    me->attack(mihawk);
    std::cout << *me;

    delete pr;
    delete pf;
    delete kokuto;
    delete me;

    return 0;
}