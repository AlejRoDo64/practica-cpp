/*Leer datos con cin
que tipos de datos podemos usar
tipos de comentarios
retorno de carro(nueva linea)
detener sistema hasta presionar una tecla*/
#include <iostream>
/*Esta es la funcion principal
para agregar numeros
y se van a mostrar*/
int main()
{
    float numero;
    std::cout << "Humano!!! ingrese un numero entero:";
    std::cin >> numero;
    std::cout << "Humano!!! este es el numero que ingresaste:";
    std::cout << numero;
    std::cout << "\n";
    // std::cin.get();
    system("pause");
    return 0;
}