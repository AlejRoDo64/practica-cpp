#include <iostream>

int main()
{
    int edad;

    std::cout << "Porfavor escribe la edad del candidato: ";
    std::cin >> edad;
    if (edad >= 18 && edad <= 40)
    {
        std::cout << "El candidato es apto para trabajar en la empresa.\n";
    }
    else
    {
        std::cout << "El candidato no es apto para trabajar en la empresa.\n";
    }
    system("pause");
    return 0;
}