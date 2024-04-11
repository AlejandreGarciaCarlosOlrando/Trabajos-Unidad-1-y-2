#include <iostream>
using namespace std;
void cuadrado (int &x);
void cubo (int &x);

void cuadrado ( int &x){
	x=x*x;
}

void cubo ( int &x){
	x=x*x*x;
}

int main ()
{ //Mensaje de bienvenida
cout<<"Hola ! Este programa 1.9 calcula el cuadrado y el cubo de un numero entero positivo"<<"\n";

int n;
cout<<"IngresamNUmero:";
cin>>n;
cuadrado(n);
cout<<"El numero elevado al cuadrado es:"<<n;
cout<<"Ingresa un numero:";
cin>>n;
cubo(n);
cout<<"El numero elevado al cubo es:"<<n;
return 0;
}
