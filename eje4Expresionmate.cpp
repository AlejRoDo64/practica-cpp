#include <iostream>
/*
se pide una cantidad de numeros los culaes completaran esta expresion
*/
int main(){
float a, b, c, d, e, f,res;
std::cout<<"Humano!!! Escribe lo siguiente: \n";
std::cout<<"Valor de a: ";
std::cin>>a;
std::cout<<"Valor de b: ";
std::cin>>b;
std::cout<<"Valor de c: ";
std::cin>>c;
std::cout<<"Valor de d: ";
std::cin>>d;
std::cout<<"Valor de e: ";
std::cin>>e;
std::cout<<"Valor de f: ";
std::cin>>f;
res=(a+(b/c))/(d+(e/f));
std::cout.precision(3);
std:: cout<<"Tu resultado es : "<<res<<"\n";
system("pause");
return 0;
}