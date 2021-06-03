#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"


int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	puts("\n---------- TEST ----------\n");
	Squad yo;
	ISpaceMarine* bo = new TacticalMarine;
	ISpaceMarine* j = new TacticalMarine;
	ISpaceMarine* ji = new AssaultTerminator;
	yo.push(bo);
	yo.push(j);
	std::cout << yo.getCount() << "\n";
	std::cout << "Unit adresss : " << yo.getUnit(0) << "\n";
	yo.getUnit(0)->rangedAttack();

	puts("\n---------- Operator = ----------\n");
	Squad hey;

	hey = yo;
	std::cout << "Squad yo after assignation nb unit = "<< yo.getCount() << "\n";
	std::cout << "Squad hey nb unit = "<< hey.getCount() << "\n";
	std::cout << "hey push ji :  " << hey.push(ji) << "\n";
	std::cout << "hey push ji again :  " << hey.push(ji) << "\n";
	std::cout << "hey push NULL :  " << hey.push(NULL) << "\n";
	
	hey.getUnit(0)->rangedAttack();
	hey.getUnit(1)->meleeAttack();
	hey.getUnit(2)->meleeAttack();

	std::cout << hey.getUnit(0) << "\n\n";
	std::cout << hey.getUnit(1) << "\n\n";
	std::cout << hey.getUnit(2) << "\n\n";
	std::cout << hey.getUnit(3) << "\n\n";

	puts("\n----------COPY----------\n");
	Squad pelo(hey);
	pelo.getUnit(0)->rangedAttack();
	pelo.getUnit(1)->meleeAttack();
	pelo.getUnit(2)->meleeAttack();

	std::cout << pelo.getUnit(0) << "\n\n";
	std::cout << pelo.getUnit(1) << "\n\n";
	std::cout << pelo.getUnit(2) << "\n\n";
	std::cout << pelo.getUnit(3) << "\n\n";
	puts("----------FIN----------");

	return 0;
}