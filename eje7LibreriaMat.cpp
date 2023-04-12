#include <iostream>
#include <math.h>
/*Funcion goto
libreria math.h
condicionales para corregir
*/
int main()
{
    float x, y, res, yCuadradoMenosUno;

    std::cout << "Humano digita lo siguiente:\n";
    std::cout << "Valor de x: ";
    std::cin >> x;
    ingresaYDenuevo:
    std::cout << "Valor Y: ";
    std::cin >> y;
    yCuadradoMenosUno = (pow(y, 2) - 1);

    if (yCuadradoMenosUno == 0)
    {
        std::cout<<"Humano ese valor de y no es valido. ";
        std::cout << "Humano digita de nuevo el valor de y\n";
        goto ingresaYDenuevo;
    }
    else
    {
        
        res = (sqrt(x)) / (pow(y, 2) - 1);
        std::cout << "Humano tu resultado es: " << res << "\n";
    }

    system("pause");
    return 0;
}