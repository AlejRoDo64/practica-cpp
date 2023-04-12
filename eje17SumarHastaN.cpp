#include <iostream>
/*
Programa el cual permite hacer una suma concecutiva hasta n veces
pide el numero n mayor a uno
realizar la suma 1+2+3 hasta n numero
*/
int main()
{
    int numero, suma = 0;

    do
    {
        std::cout << "Porfavor digita un numero mayor a 0: ";
        std::cin >> numero;
    } while (numero <= 0);
    std::cout << "Suma: ";
    for (int i = 1; i <= numero; i++)
    {
        if (i != numero)// division para mostrar el final sin un '+' extra.
        {
            std::cout << i<< " + " ;
        }else{
            std::cout << i <<"\n";
        }      
        suma += i;        
    }
    std::cout << "Aqui esta la suma total = " << suma << ".\n";
    system("pause");
    return 0;
}