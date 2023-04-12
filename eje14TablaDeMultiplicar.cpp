#include <iostream>

int main()
{
    int numero, resultado;
    do{
    std::cout << "Humano, digita el numero entre 1 y 10 para ver su tabla hasta el 10: ";
    std::cin >> numero;
    }while(numero <1 || numero > 11);
    
    std::cout << "Humano, mira la Tabla del " << numero << "\n";
    for (int i = 1; i < 11; i++)
    {
        resultado = numero * i;
        std::cout << i << " x " << numero << " = " << resultado << "\n";
    }
    std::cout << "Fin.\n";
    system("pause");
    return 0;
}