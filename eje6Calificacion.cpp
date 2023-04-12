#include <iostream>
/*
Calificacion de practicas vale un 40 %
Calificación de participacion vale un 20 %
Calificacion de examen vale un 40 %

Obtener la calificacion final sumando y obteniendo un promedio*/

int main()
{
    float calPracticas, calParticipa, calExamen, calTotal;

    std::cout<<"Pofesor califique a su estudiante: \n";
    std::cout<<"Calificacion de practicas: ";std::cin>>calPracticas;
    std::cout<<"Calificacion de la participacion: ";std::cin>>calParticipa;
    std::cout<<"Calificaion del examen: ";std::cin>>calExamen;
    calPracticas*=0.40;
    calParticipa*=0.20;
    calExamen*=0.40;
    calTotal=(calPracticas)+(calParticipa)+(calExamen);

    std::cout<<"La calificacion total del estudiate es: "<<calTotal<<"\n";

    system("pause");
    return 0;
}