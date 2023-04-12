#include <iostream>
#include <time.h>

/*
juego de encontrar el numero aleatorio entre 1 y 100 
libreria time.h

*/
int main()
{
    int numero, aleatorio, contador = 0;
    srand(time(NULL));
    aleatorio = 1 + rand() % 100;

    do
    {
        std::cout << "Humano digita un numero entre 1 y 100: ";
        std::cin >> numero;
        if (numero > aleatorio)
        {
            std::cout << "Humano, mi numero es menor. \n";
        }
        if (numero < aleatorio)
        {
            std::cout << "Humano, mi numero es mayor. \n";
        }
        contador++;
        if (numero == aleatorio){
            std::cout << "Felicidades ganaste despues de "<< contador << " intentos.\n";
        }
    } while (numero != aleatorio);

    system("pause");
    return 0;
}