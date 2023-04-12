#include <iostream>

/*Programa que hara la suma de cuadrados*/
int main()
{
    int suma = 0, cuadrado;

    for (int i = 1; i <= 10; i++)
    {
        cuadrado = i * i;
        std::cout<<"Cuadrado de "<<i<<" = "<<cuadrado<<"\n";
        suma += cuadrado ;
    }

    std::cout<<"La suma total de los cuadrados es : "<<suma<<"\n";
    
    system("pause");
    return 0;
}