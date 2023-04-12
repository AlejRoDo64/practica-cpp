#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Bueno humano escribe lo siguiente:\n";
    std::cout << "Valor de a: ";
    std::cin >> a;
    std::cout << "valor de b: ";
    std::cin >> b;
    c = a;
    a = b;
    b = c;

    std::cout<<"Tu resultado intercambiado humano es:\na= "<<a<<"\nb= "<<b<<"\n";

    system("pause");
    return 0;
}