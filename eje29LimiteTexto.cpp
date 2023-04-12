#include <iostream>
#include <string.h>
/*
programa el cula limita la cantidad de texto
y se usa la libreria string.h
*/
int main()
{
    char texto[10];
    int longitud = 0; // Longitud del texto
regresa:
    std::cout << "Humano, por favor ingresa un texto con un minimo de 10 letras:";

    gets(texto); // toma el texto sin importar los espacios.

    longitud = strlen(texto); // se le asigna el tamaño del texto.
    if (longitud <= 10)
    {
        std::cout << "Felicidades humano.\n";
    }
    else
    {
        std::cout << "Vuelve a intentarlo humano.\n";
        goto regresa;
    }

    system("pause");

    return 0;
}
