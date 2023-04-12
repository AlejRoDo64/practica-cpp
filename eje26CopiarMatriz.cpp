#include <iostream>

int main()
{
    int matrizA[100][100], matrizB[100][100], filas, columnas;
    std::cout << "Por favor digita el numero de filas y columnas de las  matrices: ";
    std::cin >> filas >> columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << " Humano ingresa la posicion (" << (i + 1) << ") , (" << (j + 1) << ") : ";
            std::cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizB[i][j] = matrizA[i][j];
        }
    }
    std::cout << "\n\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {

            std::cout << "["<<matrizB[i][j]<<"] ";
        }
        std:: cout << "\n";
    }
    std::cout << "\n\n";
    system("pause");
    return 0;
}