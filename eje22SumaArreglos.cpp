#include <iostream>

main()
{
    int numero[] = {1, 2, 3, 4, 5}, suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma += numero[i];
        std::cout << numero[i] << " + ";
    }
    std::cout << "\nAqui esta tu suma: " << suma << "\n";
    system("pause");
    return 0;
}