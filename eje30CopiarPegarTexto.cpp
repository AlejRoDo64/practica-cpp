#include <iostream>
#include <string.h>
int main()
{
    /*
    Programa el cual definira un string y pegara lo mismo en otro string con una medida de 10.
    */
    char texto1[] = "Alejandro Romero", texto2[10];
    strcpy(texto2, texto1); // el que recibe y donde sale el texto.
    std::cout << texto2 << "\n";
    system("pause");
    return 0;
}