#include <iostream>

/*Programa el cual guardara numeros en un arreglo digitados por el ususario
y definira cual es el mayor numero donde lo mostrara enn pantalla al final.*/

int main()
{
    int tamano, numero[100], mayor = 0;
    do // Creacion de la cantidad de espacios para calcular el mayor y el menor numero
    {
        std::cout << "Por favor digita un numero (de 1 a 100): ";
        std::cin >> tamano;
    } while (tamano < 0 || tamano > 100);

    for (int i = 0; i < tamano; i++) // Se guardaran los numeros digitados por el usuario para despues evaluarse
    {
        std::cout << "Digita el numeor para la poscision " << (i + 1) << " : ";
        std::cin >> numero[i];

        if (numero[i] > mayor)// hallaremos el numero mayor con una variable que guardara el valor dependiendo de si es mayor al numero "mayor"

        {
            mayor = numero[i];
        }
    }    std::cout << "humano mira tu numero este es el mayor: " << mayor << "\n";
    system("pause");
    return 0;
}