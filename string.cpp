#include <iostream>

/*
inicio a Strings
cadena de caracteres y formas de guardarlas.
*/

int main()
{
    char programador[] = "programador";
    // char novato[] = {'n', 'o', 'v', 'a', 't', 'o'};
    char nombre[5];
    std::cout << programador << "\n"<< sizeof(programador) << "\n";
    // std::cout << novato << "\n" << sizeof(novato) << "\n";
    std::cout << "Ingresa tu nombre: ";
    gets(nombre);
    std::cout << nombre << "\n"
              << sizeof(nombre);
    system("pause");
    return 0;
}