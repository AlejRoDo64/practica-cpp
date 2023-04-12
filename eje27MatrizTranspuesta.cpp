/*
Aplicacion la cual tomara dos matrices de mismo tamaño y
la primera sera transpuesta a la otra
*/

#include <iostream>

int main()
{
    int matrizA[100][100], matrizB[100][100], filas, columnas;
    // matrices la cual tendran una dimension de 100 filas y 100 columnas y dos que tomaran el valor de las filas y columnas maximas.
    do
    {
        std::cout << "Por favor, digita el numero de filas y al oprimir enter el numero de columnas: ";
        std::cin >> filas >> columnas;
    } while ((filas > 100 || filas < 1) || (columnas > 100 || columnas < 1)||(columnas != filas));
    // ciclo para no supera el limite de las matrices
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "Por favor digita el valor a la posicion " << (i + 1) << ", " << (j + 1) << ": ";
            std::cin >> matrizA[i][j];
            // Aqui se transpondra la matriz A a la matriz B
            matrizB[i][j] = matrizA[j][i];
        }
    }

    std:: cout << "Matriz : \n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "[" << matrizA[i][j] << "] ";
        }
        std::cout << "\n";
    }
    std::cout << "Matriz Transpuesta: \n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "[" << matrizB[i][j] << "] ";
        }
        std::cout << "\n";
    }
    system("pause");
    return 0;
}