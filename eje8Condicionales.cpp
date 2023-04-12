#include <iostream>

int main()
{
    int n1, n2;
    std::cout << "Humano, escribe 2 numeros: \n";
    std::cout << "numero 1: ";
    std::cin >> n1;
    std::cout << "numero 2: ";
    std::cin >> n2;
    if (n1 == n2)
    {
        std::cout << "Los dos numeros son iguales.\n";
    }
    else if (n1 > n2)
    {
        std::cout << "El numero uno es mayor.\n";
    }
    else
    {
        std::cout << "El numero dos es mayor.\n";
    }
    system("pause");
    return 0;
}