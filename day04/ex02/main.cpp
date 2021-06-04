/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 09:00:34 by alidy             #+#    #+#             */
/*   Updated: 2021/06/04 11:07:20 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(jim);
	vlc->push(bob);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	delete vlc;
	
	std::cout << std::endl << "---------- TEST ----------" << std::endl;
	Squad yo;
	ISpaceMarine* bo = new TacticalMarine;
	ISpaceMarine* j = new TacticalMarine;
	ISpaceMarine* ji = new AssaultTerminator;
	yo.push(bo);
	yo.push(j);
	std::cout << yo.getCount() << std::endl;
	std::cout << "Unit adresss : " << yo.getUnit(0) << std::endl;
	yo.getUnit(0)->rangedAttack();

	std::cout << std::endl << "---------- Operator = ----------" << std::endl;
	Squad hey;

	hey = yo;
	std::cout << "Squad yo after assignation nb unit = "<< yo.getCount() << std::endl;
	std::cout << "Squad hey nb unit = "<< hey.getCount() << std::endl;
	std::cout << "hey push ji :  " << hey.push(ji) << std::endl;
	std::cout << "hey push ji again :  " << hey.push(ji) << std::endl;
	std::cout << "hey push NULL :  " << hey.push(NULL) << std::endl;
	
	hey.getUnit(0)->rangedAttack();
	hey.getUnit(1)->meleeAttack();
	hey.getUnit(2)->meleeAttack();

	std::cout << hey.getUnit(0) << std::endl << std::endl;;
	std::cout << hey.getUnit(1) << std::endl << std::endl;;
	std::cout << hey.getUnit(2) << std::endl << std::endl;;
	std::cout << hey.getUnit(3) << std::endl << std::endl;;

	std::cout << std::endl << "----------COPY----------" << std::endl;
	Squad pelo(hey);
	pelo.getUnit(0)->rangedAttack();
	pelo.getUnit(1)->meleeAttack();
	pelo.getUnit(2)->meleeAttack();

	std::cout << pelo.getUnit(0) << std::endl << std::endl;;
	std::cout << pelo.getUnit(1) << std::endl << std::endl;;
	std::cout << pelo.getUnit(2) << std::endl << std::endl;;
	std::cout << pelo.getUnit(3) << std::endl << std::endl;;
	std::cout << "----------END----------" << std::endl;

	return 0;
}