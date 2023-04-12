#include <iostream>
/*
Aqui se le pide al usuario 2 numeros y se operaran en la exprecion (a/b)+1
*/
int main()
{
    float a, b, res;
    std::cout << "Humano, por favor ingresa lo siguiente.\n";
    std::cout << "Valor numerico de a: ";
    std::cin >> a;
    std::cout << "Valor numerico de b: ";
    std::cin >> b;
    res = (a / b) + 1;
    std::cout.precision(3);
    std::cout << "\nHumano, tu resultado es: " << res << "\n";

    system("pause");
    return 0;
}