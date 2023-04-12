#include <iostream>

int main()
{
    int numero, factorial = 1;
    do
    {
        std::cout << "Humano digita un numero mayor a 0: ";
        std::cin >> numero;
    } while (numero < 1);
    std::cout<<"Factorial de " << numero << "!\n";
    for (int i = 1; i <= numero; i++)
    {
        factorial*=i;
    }
    std::cout << "Toma tu resusltado: " << factorial << "\n";
    
    system("pause");
    return 0;
}