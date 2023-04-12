#include <iostream>
/*Menu de un banco con distintas opciones*/
int main()
{
    int opcion;
    float total = 1000, ingreso, egreso;
volver:
    std::cout << "Humano, bienvenido al banco.\n";
    std::cout << "Porfavor, digita una opcion:\n";
    std::cout << "1. Ingreso de dinero.\n";
    std::cout << "2. Retirar dinero.\n";
    std::cout << "3. Salir.\n";
    std::cin >> opcion;
    switch (opcion)
    {
    case 1:
        std::cout << "Humano tu saldo actual es " << total << "\n";
        std::cout << "Cuanto vas a ingresar: ";
        std::cin >> ingreso;
        total += ingreso;
        std::cout << "Tu saldo total ahora es: " << total << "\n";
        goto volver;
        break;

    case 2:
        std::cout << "Humano tu saldo actual es " << total << "\n";
        std::cout << "Cuanto vas a retirar: ";
        std::cin >> egreso;
        if (total < egreso||egreso<0) 
        {
            std::cout << "No posees tanto dinero.\n";
            std::cout<<"Tienes "<<total<<"\n";
        }
        else
        {
            total -= egreso;
            std::cout << "Tu saldo total ahora es: " << total << "\n";
        }
        goto volver;
        break;

    case 3:
        std::cout << "Adios vuelva prontos.\n";
        break;
    default:
        std::cout << "Esta opcion no es valida vuelve a intentar.";
        goto volver;
        break;
    }

    system("pause");
    return 0;
}