/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:13:09 by alidy             #+#    #+#             */
/*   Updated: 2021/06/04 15:40:16 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    /*AMateria* spell = new Ice;
	AMateria* spell2 = new Cure;
	Character boe("boe");
	Character joe("joe");

	boe.equip(spell);
	boe.equip(spell2);
	boe.use(0, joe); // 10
	boe.use(1, joe); // 10
	boe.use(1, joe); // 20
	std::cout << std::endl << spell->getXP() << std::endl << std::endl;
	std::cout << spell2->getXP() << std::endl;


	AMateria *spell3 = spell2;
	std::cout << "Copy of Cure | type:" << spell3->getType() <<", xp : " << spell3->getXP() << std::endl;
	Character moe(boe);
	puts("Copy boe in moe");
	moe.use(1, boe); // 30
	moe.use(3, boe); // don't display bc third maeteria don't exist
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	Cure* fifth = new Cure;
	src->learnMateria(fifth);
	delete fifth;
	ICharacter* moi = new Character("moi");
	std::cout << moi->getName() << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << tmp->getType() << std::endl;
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
	*/
    /*
	std::cout << std::endl << " ----- Learn materia -------" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* moi = new Character("moi");

	std::cout << std::endl << "Creating materia source and equip" << std::endl;
	AMateria* tmp;
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	AMateria* tmp5;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp1 = src->createMateria("cure");
	moi->equip(tmp1);
	tmp2 = src->createMateria("ice");
	moi->equip(tmp2);
	tmp3 = src->createMateria("cure");
	moi->equip(tmp3);
	tmp4 = src->createMateria("ice");
	moi->equip(tmp4);
	tmp5 = src->createMateria("cure");
	moi->equip(tmp5);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl << "Testing use and see xp" << std::endl;
	moi->use(0, *bob);
	moi->use(1, *bob);
	std::cout << tmp->getXP() << " xp from tmp" << std::endl;
	std::cout << tmp1->getXP() << " xp from tmp1" << std::endl;
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(3, *bob);
	moi->use(-3, *bob);
	moi->use(33, *bob);
	moi->use(4, *bob);
	std::cout << tmp->getXP() << " xp from tmp -> use(0, ...)" << std::endl;
	std::cout << tmp1->getXP() << " xp from tmp1 -> use(1, ...)" << std::endl;
	std::cout << tmp2->getXP() << " xp from tmp2 -> use(2, ...)" << std::endl;
	std::cout << tmp3->getXP() << " xp from tmp3 -> use(3, ...)" << std::endl;

	std::cout << std::endl << "Testing equip / unequip" << std::endl;
	std::cout << tmp3->getXP() << " xp from tmp3" << std::endl;
	moi->unequip(3);
	moi->unequip(8);
	moi->unequip(-3);
	moi->use(3, *bob);
	moi->equip(tmp3);
	std::cout << tmp3->getXP() << " xp from tmp3" << std::endl;

	delete bob;
	delete moi;
	delete src;
    */
}