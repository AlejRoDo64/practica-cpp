#include <iostream>

/*
Se guardaran datos en dos matrices y
se comprobaran si es una matriz simetrica
deben ser matrices cuadradas
*/

int main()
{
    int matrizA[100][100], matrizB[100][100], filasMatrizA, columnasMatrizA, filasMatrizB, columnasMatrizB;
    do
    {
        std::cout << "Humano ingresa las medidas de la matriz A: ";
        std::cin >> filasMatrizA >> columnasMatrizA;
        std::cout << "Humano ingresa las medidas de la matriz B: ";
        std::cin >> filasMatrizB >> columnasMatrizB;
    } while ((filasMatrizA != columnasMatrizA && filasMatrizB != columnasMatrizB) && // 2x2 A, 3x3 B, sean simetricas
             (filasMatrizA != filasMatrizB && columnasMatrizA != columnasMatrizB)    // 2x2 A, 2x2 B// 3x3 A 3x3 B ambas matrices sean simetricas
    );
llenarMatriz:
std::cout << "Matriz A\n";
    for (int i = 0; i < filasMatrizA; i++)
    {
        for (int j = 0; j < columnasMatrizA; j++)
        {
            std::cout << "Digita los valores de la matris A en la posicion: " << (i + 1) << " ," << (j + 1) << " : ";
            std::cin >> matrizA[i][j];
        }
    }
    std::cout << "\n\n";
    std::cout << "Matriz B\n";
    for (int i = 0; i < filasMatrizB; i++)
    {
        for (int j = 0; j < columnasMatrizB; j++)
        {
            std::cout << "Digita los valores de la matris B en la posicion: " << (i + 1) << " ," << (j + 1) << " : ";
            std::cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < filasMatrizA; i++)
    {
        for (int j = 0; j < columnasMatrizA; j++)
        {
            if (matrizA[i][j] != matrizB[j][i])
            {
                std::cout << "Las matricez no son simetricas intentalo de nuevo.\n";
                goto llenarMatriz;
            } 
        }
    }
    std::cout<<"Felicidades Has escrito una matriz simetrica\n";
    system("pause");
    return 0;
}