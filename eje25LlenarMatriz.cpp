#include <iostream>
/*
Ejercicio para llenar una matrizy recorre con el nuevo elemento llamado ciclo anidado
*/
int main()
{
    int matriz[100][100], filas, columnas;
    std::cout << "Por favor ingresa el tamanio de las filas de tu matriz: ";
    std::cin >> filas;
    std::cout << "Por favor digita el tamanio de las columnas de la matriz: ";
    std::cin >> columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "humano ingresa el valor de la posicion " << (i + 1) << ", " << (j + 1) << " : ";
            std::cin >> matriz[i][j];
        }
    }
    std::cout << "\n\n";
    std::cout << "\n\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n";
    std::cout << "\n\n";
    system("pause");
    return 0;
}