#include <iostream>
/*Saber si un numero es par o impar*/
int main()
{
    int n1, prueba;

    std::cout << "Digita un numero entero: ";
    std::cin >> n1;
    prueba = n1 % 2;
    if (prueba == 0)
    {
        std::cout << "Tu numero es "<<n1<<" y es par.\n";
    }
    if (prueba == 1)
    {
        std::cout << "Tu numero es "<<n1<<" y es impar.\n";
    }
    system("pause");
    return 0;
}