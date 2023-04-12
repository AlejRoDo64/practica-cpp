#include <iostream>

int main()
{
    char letra;
    vocal:
    std::cout << "Humano, por favor ingresa una letra vocal: ";
    std::cin >> letra;

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout << "bien hecho humano has presionado una vocal.\n";
        break;
    default:
        std::cout << "No has presionado una vocal.\n";
        goto vocal;
        break;
    }

    system("pause");
    return 0;
}