#include <iostream>

int main()
{
    int numeroIngresado, numeroAEncontrar = 5;
    std::cout << "Ingresa un numero mayor o igual que estoy pensando: ";
    std::cin >> numeroIngresado;
    if (numeroIngresado >= numeroAEncontrar)
    {
        std::cout << "Bien jugando.\n";
    }
    else
    {
        std::cout << "Sigue jugando.\n";
    }
    system("pause");
    return 0;
}