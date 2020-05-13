#include "Zfraction.hpp"

int main()
{
    Zfraction a(4,5);      //Déclare une fraction valant 4/5
    Zfraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
    Zfraction c, d;        //Déclare deux fractions valant 0

    c = a + b;             //Calcule 4/5 + 2/1 = 14/5

    d = a * b;             //Calcule 4/5 * 2/1 = 8/5

    std::cout << a << " + " << b << " = " << c << std::endl;

    std::cout << a << " * " << b << " = " << d << std::endl;

    if(a > b)
        std::cout << "a est plus grand que b." << std::endl;
    else if(a == b)
        std::cout << "a est egal a b." << std::endl;
    else
        std::cout << "a est plus petit que b." << std::endl;

    return 0;
}