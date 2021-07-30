//ejercicio que le da solucion a una ecuacion cuadratica

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float a,b,c,resultado1=0,resultado2=0;


    cout<<"Ingrese a: ";
    cin>>a; 
    cout<<"Ingrese b: ";
    cin>>b; 
    cout<<"Ingrese c: ";
    cin>>a; 

    resultado1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	

    cout<<"el resultado 1 es: "<<resultado1<<endl;
    cout<<"el resultado 2 es: "<<resultado2<<endl;


    return 0;
}