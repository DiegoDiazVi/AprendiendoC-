//ejercicio de dos catetos y la respuesta es la hipotenusa

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float a, b, resultado = 0;

    cout<<"Ingrese el primer cateto: ";
    cin>>a; 
    cout<<"Ingrese el segundo cateto: ";
    cin>>b; 

    resultado = pow(a,2) + pow(b,2);
    resultado = sqrt(resultado);

    cout<<"la medida de la hipotenusa es: "<<resultado;

    return 0;
}