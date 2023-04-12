#include <iostream>

int main()
{
    int numero, suma = 0;

    do
    {
        std::cout << "Humano, por favor digita un numero entero (el rango de 100 a 200 termina el programa): ";
        std::cin >> numero;
        suma += numero;
    } while ((numero < 100 || numero > 200) && numero != 0);
    std::cout << "Aqui esta tu suma: " << suma << "\n";
    system("pause");
    return 0;
}