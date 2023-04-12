#include <iostream>

/*
Programam que realiza la sucecion de fibonacci  hasta un numero n
1 1 2 3 5 8 13 21 34 ... n
*/
int main()
{
    int numero, x = 0, y = 1, z = 0;
    do
    {

        std::cout << "Humano, escribe un nu mero mayor a 1: ";
        std::cin >> numero;

    } while (numero <= 1);
    std::cout << "1 ";
    for (int i = 1; i <= numero; i++)
    {
        z = x + y;
        std::cout << z << " ";
        x = y;
        y = z;
    }
    std::cout << "\n";
    system("pause");
    return 0;
}