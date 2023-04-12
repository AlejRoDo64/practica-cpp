#include <iostream>

int main()
{
    char letra;
    do
    {
        std::cout << "Humano digita la letra a: ";
        std::cin >> letra;

    } while (letra == 'a');

    std::cout << "Humano te dije que presionaras la a. \n";

    system("pause");
    return 0;
}