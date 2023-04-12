#include <iostream>
#include <math.h>

/*
Programa que realiza una sumatoria de 2 elevado n veces.
utilizar la libreria math.h
*/

int main()
{
    float numero, sumatoria = 0, potencia = 0;
    do
    {
        std::cout << "Por favor, digita un numero entero mayor a 1: ";
        std::cin >> numero;
    } while (numero < 1);
    std::cout << "Sumatoria de :\n";
    for (int i = 1; i <= numero; i++)
    {
        potencia = pow(2, i);
        sumatoria += potencia;
        std::cout << "2^" << i << " = " << potencia << "\n";
    }
    std::cout << "Aqui esta tu suma: " << sumatoria << "\n";
    system("pause");
    return 0;
}