#include "MutantStack.hpp"
#include <string>

int main(void)
{
	MutantStack<int> mutant;
	mutant.push(5);
	mutant.push(17);
	MutantStack<int> mutant2(mutant);
	MutantStack<int> mutant3 = mutant;
	std::cout << "Size1: " << mutant.size() << std::endl;
	std::cout << "Size2: " << mutant2.size() << std::endl;
	std::cout << "Size3: " << mutant3.size() << std::endl;
	std::cout << "Top : " << mutant.top() << std::endl;
	mutant.pop();
	mutant.pop();
	std::cout << "Empty : " << mutant.empty() << std::endl;
	std::cout << "Size : " << mutant.size() << std::endl;
	mutant.push(3);
	mutant.push(5);
	mutant.push(737);
	std::cout << "Empty : " << mutant.empty() << std::endl;
	std::cout << "Size : " << mutant.size() << std::endl;
	for (int i = 0; i < 10; i++)
		mutant.push(i);
	std::cout << "Size : " << mutant.size() << std::endl;
	MutantStack<int>::iterator itb = mutant.begin();
	MutantStack<int>::iterator ite = mutant.end();
	while (itb != ite)
	{
		std::cout << *itb << " ";
		++itb;
	}
	return(0);
}