#include <iostream>

int main()
{
    int arreglo1[5], arreglo2[5], arreglo3[10], guarda = 10;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Humano digita en el arreglo 1 el valor " << i + 1 << ": ";
        std::cin >> arreglo1[i];
        // arreglo3[i] = arreglo1[i];
    }

    std::cout << "\n";
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Humano digita en el arreglo 2 el valor " << i + 1 << ": ";
        std::cin >> arreglo2[i];
        // arreglo3[i] = arreglo2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            arreglo3[i] = arreglo1[i];
        }
        else
        {
            arreglo3[i] = arreglo2[i - 5];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << "[ " << arreglo3[i] << " ] ";
    }

    std::cout << "\n";
    system("pause");
    return 0;
}