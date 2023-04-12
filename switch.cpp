#include <iostream>

int main()
{
    int numero;
regresar:
    std::cout << "humano ingresa un numero entre 1, 5 o 6 para terminar: ";
    std::cin >> numero;
    switch (numero)
    {
    case 1:
        std::cout << "presionaste el numero uno\n";
        goto regresar;
        break;
    case 2:
        std::cout << "presionaste el numero dos\n";
        goto regresar;
        break;
    case 3:
        std::cout << "presionaste el numero tres\n";
        goto regresar;
        break;
    case 4:
        std::cout << "presionaste el numero cuatro\n";
        goto regresar;
        break;
    case 5:
        std::cout << "presionaste el numero cinco\n";
        goto regresar;
        break;
    case 6:
        std::cout << "Adios.\n";
        system("pause");
        return 0;
        break;
    default:
        std::cout << "Te pedi un numero de 1 a 6.\n";
        goto regresar;
        break;
    }
    system("pause");
    return 0;
}