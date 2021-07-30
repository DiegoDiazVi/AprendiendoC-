//! 7. programa que calcule el valer de 1+2+3+...+n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero, i, suma = 0;

    cout<<"ingrese los numeros consecutivos a sumar: ";
    cin>>numero;

    for (i=1; i<=numero; i++)
    {
        suma += i;
    }

    cout<<"la suma es: "<<suma<<endl;
    
    system ("pause");
    return 0;
}